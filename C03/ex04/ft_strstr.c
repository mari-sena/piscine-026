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

char	*ft_strstr(char *str, char *to_find)
{
	int	aux;
	int	aux_equal;

	aux = 0;
	while (str[aux] != '\0')
	{
		aux_equal = aux;
		while ((str[aux_equal] == to_find[aux_equal])
			&& str[aux_equal] != '\0'
			&& to_find[aux_equal] != '\0')
		{
			aux_equal++;
		}
		aux++;
	}
	return (to_find);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[] = "Hello World!";
	char	to_find[] = "World";
	char	str2[] = "Hello World!!";
	char	to_find2[] = "e";

	printf("(ft_strstr): %s\n", ft_strstr(str, to_find));
	printf("(strstr): %s\n", strstr(str2, to_find2));
	return (0);
}
