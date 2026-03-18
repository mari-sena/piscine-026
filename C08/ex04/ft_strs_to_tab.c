/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strs_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <mariafer@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 14:56:25 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/18 14:56:26 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux])
		aux++;
	return (aux);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	dest = (char *)malloc(ft_strlen(src) + 1);
	if (!dest)
		return (NULL);
	dest = ft_strcpy(dest, src);
	return (dest);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int		index;
    t_stock_str	*result;

	result = malloc(sizeof(struct s_stock_str) + 1);
	if (result == NULL)
		return (NULL);
	index = 0;
	while (index < ac)
	{
		result[index].size = ft_strlen(av[index]);
		result[index].copy = av[index];
		result[index].str = ft_strdup(av[index]);
		index++;
	}
	result[index].str = 0;
	return (result);
}

#include <stdio.h>
int main(void)
{
	int		index;
    char    *str[3] = {"gato","cachorro", "sacherro"};
	struct s_stock_str	**result;

    index = 0;
	result = ft_strs_to_tab(3, str);
	while (result[index])
	{
		printf("%s", result[index]);
		index++;
	}
    return (0);
}