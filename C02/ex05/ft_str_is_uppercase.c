/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 13:41:05 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/02 16:37:35 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 'A' || *str > 'Z')
			|| *str != 32)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	char	str[] = "AD cd";

	printf("%d", ft_str_is_uppercase(str));
	return (0);
}
