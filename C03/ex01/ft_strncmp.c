/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 14:28:06 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/03 14:28:11 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{

}

#include <stdio.h>
#include <string.h>
int main(void)
{
    // s1 < s2  resultado 'e negativo
    // s1 > s2  resultado 'e positivo

    unsigned int    n1 = 0;
    char			s1[] = "He";
    char			s2[] = "He";
    printf("He He = %d", ft_strncmp(s1, s2, n1));
    printf(" %d\n\n", strncmp(s1, s2, n1));

    unsigned int    n2 = 0;
    char			s3[] = "He";
    char			s4[] = "Ho";
    printf("He Ho = %d", ft_strncmp(s3, s4, n2));
    printf(" %d\n\n", strncmp(s3, s4, n2));

    unsigned int    n3 = 0;
    char			s5[] = "Ho";
    char			s6[] = "He";
    printf("Ho He = %d", ft_strncmp(s5, s6, n3));
    printf(" %d\n\n", strncmp(s5, s6, n3));

    unsigned int    n4 = 0;
    char			s7[] = "He";
    char			s8[] = "Hel";
    printf("He Hel = %d", ft_strncmp(s7, s8, n4));
    printf(" %d\n\n", strncmp(s7, s8, n4));

    unsigned int    n5 = 0;
    char			s9[] = "Hel";
    char			s10[] = "He";
    printf("Hel He = %d", ft_strncmp(s9, s10, n5));
    printf(" %d\n\n", strncmp(s9, s10, n5));

    unsigned int    n6 = 0;
    char			s11[] = "Hell";
    char			s12[] = "He";
    printf("Hell He = %d", ft_strncmp(s11, s12, n6));
    printf(" %d\n\n", strncmp(s11, s12, n6));

    unsigned int    n7 = 0;
    char			s13[] = "Hello";
    char			s14[] = "He";
    printf("Hello He = %d", ft_strncmp(s13, s14, n7));
    printf(" %d\n", strncmp(s13, s14, n7));
    return (0);
}
