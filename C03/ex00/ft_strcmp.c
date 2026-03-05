/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 14:16:22 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/03 14:16:24 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
    int aux;
    unsigned int result;

    aux = 0;
    result = 0;
    while (s1[aux] != '\0' || s2[aux] != '\0')
    {
        if (s1[aux] == '\0')
            return -((unsigned int) (s2[aux]));
        if (s2[aux] == '\0')
            return ((unsigned int) (s1[aux]));

        if (s1[aux] != s2[aux])
            return s1[aux] - s2[aux];

        result = s1[aux] - s2[aux];
        s1++;
        s2++;
    }
    return (result);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     // s1 < s2  resultado 'e negativo
//     // s1 > s2  resultado 'e positivo

//     char s1[] = "He";
//     char s2[] = "He";
//     printf("He He = %d", ft_strcmp(s1, s2));
//     printf(" %d\n\n", strcmp(s1, s2));

//     char s3[] = "He";
//     char s4[] = "Ho";
//     printf("He Ho = %d", ft_strcmp(s3, s4));
//     printf(" %d\n\n", strcmp(s3, s4));

//     char s5[] = "Ho";
//     char s6[] = "He";
//     printf("Ho He = %d", ft_strcmp(s5, s6));
//     printf(" %d\n\n", strcmp(s5, s6));

//     char s7[] = "He";
//     char s8[] = "Hel";
//     printf("He Hel = %d", ft_strcmp(s7, s8));
//     printf(" %d\n\n", strcmp(s7, s8));

//     char s9[] = "Hel";
//     char s10[] = "He";
//     printf("Hel He = %d", ft_strcmp(s9, s10));
//     printf(" %d\n\n", strcmp(s9, s10));

//     char s11[] = "Hell";
//     char s12[] = "He";
//     printf("Hell He = %d", ft_strcmp(s11, s12));
//     printf(" %d\n\n", strcmp(s11, s12));

//     char s13[] = "Hello";
//     char s14[] = "He";
//     printf("Hello He = %d", ft_strcmp(s13, s14));
//     printf(" %d\n\n", strcmp(s13, s14));

//     char s15[] = "Hello";
//     char s16[] = "World";
//     printf("Hello World = %d", ft_strcmp(s15, s16));
//     printf(" %d\n\n", strcmp(s15, s16));
//     return (0);
// }
