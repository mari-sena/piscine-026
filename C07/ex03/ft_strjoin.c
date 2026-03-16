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

char *ft_strjoin(int size, char **strs, char *sep)
{
	char	*aux;
	int		index;

	if (size == 0)
		return (NULL);
	aux = (char *)malloc(size);
	index = 0;
	while (index < size)
	{
		if ((*strs)[index] == '\0')
			aux = sep;
		aux = &(*strs)[index];
		aux++;
		index++;
	}
	return (aux);
}

#include <stdio.h>
int main(void)
{
    char	*strs[3] = {"gato", "cachorro", "sache"};
    printf("%s", ft_strjoin(17, strs, "+"));
    return (0);
}
