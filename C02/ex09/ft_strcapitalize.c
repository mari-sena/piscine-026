/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 11:38:26 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/03 11:38:28 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcapitalize(char *str)
{
    int aux;

    aux = 0;
    while (str[aux])
    {
        if ((aux == 0
            || str[aux - 1] == ' '
            || str[aux - 1] == '+'
            || str[aux - 1] == '-')
            && (str[aux] >= 'a' && str[aux] <= 'z'))
            str[aux] = str[aux] - 32;
        if ((str[aux] >= 'A' && str[aux] <= 'Z') && (str[aux - 1] ))
            str[aux] = str[aux] + 32;
        aux++;
    }
    return (str);
}

#include <stdio.h>
int main(void)
{
    char    str[] = "hi, how are you? 42words forty-two; fifty+and+one";
    char    str1[] = "HELLO HELLO";

    printf("%s\n", ft_strcapitalize(str));
    printf("%s\n", ft_strcapitalize(str1));
    return (0);
}