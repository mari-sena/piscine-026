/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 10:46:49 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/02 11:07:00 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		if ((str[aux] < 'A' && str[aux] > 'Z')
			&& (str[aux] < 'a' && str[aux] > 'z')
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
	char	str[] = "as 4dfsadkjf";

	printf("%d", ft_str_is_alpha(str));
	return (0);
}
