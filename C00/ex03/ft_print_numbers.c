/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 12:13:03 by mariafer          #+#    #+#             */
/*   Updated: 2026/02/26 11:30:44 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	int	aux;

	aux = '0';
	while (aux <= '9')
	{
		write (1, &aux, 1);
		aux++;
	}
}
/*void	main	(void)
{
	ft_print_numbers();
}*/
