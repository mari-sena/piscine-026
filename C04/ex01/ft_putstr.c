/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 11:16:57 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/07 11:21:20 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		write(1, &str[aux], 1);
		aux++;
	}
}

// int	main(void)
// {
// 	char	str[] = "Testinho";

// 	ft_putstr(str);
// 	return (0);
// }