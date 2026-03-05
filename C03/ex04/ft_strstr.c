/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 12:03:42 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/05 12:04:24 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strstr(char *str, char *to_find)
{
	int	aux_src;
	int	aux_find;

	aux_src = 0;
	if (to_find[0] == '\0')
			return (str);
	while (str[aux_src] != '\0')
	{
		aux_find = 0;
		while (str[aux_src + aux_find] == to_find[aux_find]
			&& to_find[aux_find] != '\0')
		{
			aux_find++;
		}
		str[0] = '\0';
		if (to_find[aux_find] == '\0')
			return (&str[aux_src]);
		aux_src++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int    main(void)
{
    char    str[] = "Hello World!!";
    char    to_find[] = "World";
    char    str2[] = "Hello World!!";
    char    to_find2[] = "World";

    printf("(ft_strstr): %s\n", ft_strstr(str, to_find));
    printf("(strstr): %s\n", strstr(str2, to_find2));
    return (0);
}
