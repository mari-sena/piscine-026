/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 11:42:27 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/02 16:38:33 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		if ((str[aux] < 'a' && str[aux] > 'z')
			&& str[aux] != 32)
		{
			return (0);
		}
		aux++;
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	char	str[] = "a bc";

	printf("%d", ft_str_is_lowercase(str));
	return (0);
}
