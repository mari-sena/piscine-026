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
	unsigned int	src_aux;

	aux = 0;
	src_aux = 0;
	while (src[src_aux] != '\0')
		src_aux++;
	if (size == 0)
		return (src_aux);
	while (src[aux] != '\0' && aux < (size - 1))
	{
		dest [aux] = src [aux];
		aux++;
	}
	dest[aux] = '\0';
	return (src_aux);
}

// #include <stdio.h>
// int	main(void)
// {
// 	unsigned int	size = 10;
//     char			src[] = "World!";
//     char			dest[9];

//     printf("ft_strlcpy: %u\n", ft_strlcpy(dest, src, size));
// 	return (0);
// }
