/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_ft.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 12:54:48 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/15 12:54:50 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2)
{
	int				aux;
	unsigned int	result;

	aux = 0;
	result = 0;
	while (s1[aux] != '\0' || s2[aux] != '\0')
	{
		if (s1[aux] == '\0')
			return (-((unsigned int)(s2[aux])));
		if (s2[aux] == '\0')
			return ((unsigned int)s1[aux]);
		if (s1[aux] != s2[aux])
			return (s1[aux] - s2[aux]);
		result = s1[aux] - s2[aux];
		s1++;
		s2++;
	}
	return (result);
}

char	*ft_str_range(char *start, char *end)
{
	int		index;
	char	*dest;

	dest = (char *)malloc((end - start) + 1);
	if (!dest)
		return (NULL);
	index = 0;
	while (start < end)
	{
		dest[index] = *start;
		start++;
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux])
		aux++;
	return (aux);
}
