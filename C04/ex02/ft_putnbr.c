/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 11:24:31 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/07 11:27:15 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	aux;
	char	decimal;
	
	if (nb < 10)
	{
		aux = '0' + nb;
		write(1, &aux, 1);
	}
	else if (nb < 100)
	{
		aux = nb % 10;
		decimal = nb / 10;
		aux += '0';
		decimal += '0';
		write(1, &decimal, 1);
		write(1, &aux, 1);
	}
}

int	main(void)
{
	ft_putnbr(2);
	write(1, "\n", 1);
	write(1, "\n", 1);
	ft_putnbr(42);
	write(1, "\n", 1);
	// ft_putnbr(142);
	// write(1, "\n", 1);
	// ft_putnbr(1042);
	// write(1, "\n", 1);
	// ft_putnbr(-2147483648);
}
