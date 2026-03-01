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
	int	str_size;
	int	dest_index;

	str_size = 0;
	while (src[str_size] != '\0')
	{
		str_size++;
	}
	dest_index = 0;
	while (dest_index < str_size)
	{
		if (dest_index == str_size)
			dest[dest_index] = '\0';
		dest_index++;
	}
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char	*dest = "Mar";
	char	*src = "MARIIana";

	printf("%s", ft_strcpy(dest, src));
	return (0);
}
