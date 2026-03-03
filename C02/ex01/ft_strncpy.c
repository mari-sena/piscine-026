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
	while (n--)
	{
		dest[n] = src[n];
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	dest[] = "mar";
// 	char	src[] = "luriana";

// 	printf("%s\n", ft_strncpy(dest, src, 0));
// 	printf("%s", strncpy(dest, src, 0));
// 	return (0);
// }
