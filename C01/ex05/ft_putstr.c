/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 16:37:38 by mariafer          #+#    #+#             */
/*   Updated: 2026/02/28 18:29:25 by mariafer         ###   ########.fr       */
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
/*int	main(void)
{
	char	str[5] = "Teste";
	ft_putstr(str);
	return (0);
}*/
