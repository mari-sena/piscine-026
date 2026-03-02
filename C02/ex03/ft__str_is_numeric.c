/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft__str_is_numeric.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 11:20:41 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/02 13:40:03 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *src)
{
	int	aux;

	aux = 0;
	while (src[aux] != '\0')
	{
		if (src[aux] < '0' && src[aux] > '9')
			return (0);
		aux++;
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	char	src[] = "123";
	char	src2[] = "123a";
	char	src3[] = "123 a";

	printf("%d\n", ft_str_is_numeric(src));
	printf("%d\n");
	printf("");
	return(0);
}
