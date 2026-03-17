/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <mariafer@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 16:25:52 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/16 16:25:56 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux])
		aux++;
	return (aux);
}

void	ft_continue(int size, char **strs, char *dest, char *sep)
{
	int		index;
	int		aux_index;
	int		aux2_index;

	index = 0;
	aux2_index = 0;
	while (index < size)
	{
		aux_index = 0;
		while (strs[index][aux_index])
			dest[aux2_index++] = strs[index][aux_index++];
		if (index < size - 1)
		{
			aux_index = 0;
			while (sep[aux_index])
				dest[aux2_index++] = sep[aux_index++];
		}
		index++;
	}
	dest[aux2_index] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		total;
	int		index;

	if (size == 0)
	{
		dest = (char *)malloc(sizeof(char));
		if (!dest)
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	index = 0;
	total = 0;
	while (index < size)
		total += ft_strlen(strs[index++]);
	total += (size - 1) * ft_strlen(sep);
	dest = (char *)malloc(total + 1);
	if (!dest)
		return (NULL);
	ft_continue(size, strs, dest, sep);
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {

// 	char	*strs[3] = {"gato", "cachorro", "sache"};
// 	char	*result;

// 	result = ft_strjoin(3, strs, "+");
// 	printf("%s\n", result);
// 	free(result);
// 	// printf("%lu", sizeof(char));
// 	// printf("%lu", sizeof(int));
// 	return (0);
// }
