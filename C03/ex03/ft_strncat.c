/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 10:27:28 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/05 10:29:27 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	aux_dest;
	unsigned int	aux_src;

	aux_dest = 0;
	aux_src = 0;
	while (dest[aux_dest] != '\0')
	{
		dest[aux_dest] = dest[aux_dest];
		aux_dest++;
	}
	while (src[aux_src] != '\0' && aux_src < nb)
	{
		dest[aux_dest] = src[aux_src];
		aux_src++;
		aux_dest++;
	}
	dest[aux_dest] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	unsigned int	nb = 2;
// 	char	dest[] = "Hello ";
// 	char	src[] = "World!";
// 	unsigned int	nb2 = 2;
// 	char	dest2[] = "Hello ";
// 	char	src2[] = "World!";

// 	printf("(ft_strncat): %s\n", ft_strncat(dest, src, nb));
// 	printf("(strncat): %s\n", strncat(dest2, src2, nb2));
// 	return (0);
// }
