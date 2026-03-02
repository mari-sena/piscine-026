/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 19:20:08 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/02 10:39:42 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	aux;

	aux = 0;
	while (aux <= n)
	{
		dest[aux] = src[aux]; 
		aux++;
	}
	dest[aux + 1] = '\n';
	return (dest);
}
#include <stdio.h>
int	main(void)
{
	char	dest[15];
	char	src[] = "luriana";

	printf("%s", ft_strncpy(dest, src, 3));
	return (0);
}
