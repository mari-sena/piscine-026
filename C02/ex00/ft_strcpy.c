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
	dest = src;
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
