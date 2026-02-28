/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 15:10:27 by mariafer          #+#    #+#             */
/*   Updated: 2026/02/28 18:31:34 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		aux++;
	}
	return (aux);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_strlen("astral"));
	return (0);
}*/
