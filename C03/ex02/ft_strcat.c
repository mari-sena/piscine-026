/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 11:33:51 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/08 11:33:54 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	aux_dest;
	int	aux_src;

	aux_dest = 0;
	aux_src = 0;
	while (dest[aux_dest] != '\0')
	{
		aux_dest++;
	}
	while (src[aux_src] != '\0')
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
// int main(void)
// {
//     char	dest[20] = "Hello ";
//     char	src[] = "World!";
// 	char	dest2[20] = "Hello ";
// 	char	src2[] = "World!";

//     printf("%s\n", ft_strcat(dest, src));
//     printf("%s\n", strcat(dest2, src2));
//     return (0);
// }
