/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 09:49:35 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/14 09:49:36 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	aux;

	aux = 0;
	while (src[aux])
		aux++;
	return (aux);
}

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

char *ft_strdup(char *src)
{
    char    *dest;

    dest = (char *)malloc(ft_strlen(src) + 1);
    if (dest == NULL)
        return (NULL);
    ft_strcpy(dest, src);
    return (dest);
}

#include <stdio.h>
int main(void)
{
    char    src[] = "Lucas";
    char    *dest;

    dest = ft_strdup(src);
    printf("%s", dest);
    return (0);
}