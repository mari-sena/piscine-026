/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianasena <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 21:42:37 by marianasena       #+#    #+#             */
/*   Updated: 2026/03/08 21:42:40 by marianasena      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
    int index;

    index = 0;
    while (str[index])
    {
        if (str[index] == '+' || str[index] == '-')
        if (str[index] >= '0' && str[index] <= '9')
            str[index] += 0;
        str++;
        index++;
    }
}

#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc != 2)
        return (0);
    printf("%d", ft_atoi(argv[1]));
    return (0);
}