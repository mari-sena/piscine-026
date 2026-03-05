/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 14:29:53 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/01 15:37:39 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	aux;

	aux = 0;
	while (src[aux] != '\0')
	{
		dest[aux] = src[aux];
		aux++;
	}
	dest[aux] = '\0';
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	dest[10];
// 	char	src[] = "MARIIana";

// 	printf("%s\n", ft_strcpy(dest, src));
// 	printf("%s", strcpy(dest, src));
// 	return (0);
// }
