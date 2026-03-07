/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 17:55:44 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/05 17:58:09 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
		aux++;
	return (aux);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char str[] = "Mariana";

// 	printf("(ft_strlen): %d\n", ft_strlen(str));
// 	printf("(strlen): %lu\n", strlen(str));
// 	return (0);
// }