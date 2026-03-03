/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 12:49:24 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/03 12:50:16 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	aux;

	aux = 0;
	while (src[aux] != '\0' && aux < size)
	{
		dest[aux] = src[aux];
		aux++;
	}
	dest[aux + 1] = '\0';
	return (aux);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	unsigned int	num = 10;
    char			src[] = "World!";
    char			dest[10];

    printf("%u\n", ft_strlcpy(dest, src, num));
	return (0);
}