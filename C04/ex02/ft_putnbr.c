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
	long	num;

	num = nb;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num >= 10)
		ft_putnbr(num / 10);
	aux = (num % 10) + '0';
	write(1, &aux, 1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	ft_putnbr(-42);
// 	write(1, "\n", 1);
// 	ft_putnbr(-2);
// 	write(1, "\n", 1);
// 	ft_putnbr(0);
// 	write(1, "\n", 1);
// 	ft_putnbr(2);
// 	write(1, "\n", 1);
// 	ft_putnbr(42);
// 	write(1, "\n", 1);
// 	ft_putnbr(142);
// 	write(1, "\n", 1);
// 	ft_putnbr(1042);
// 	write(1, " (1.042)\n", 10);
// 	ft_putnbr(10142);
// 	write(1, " (10.142)\n", 11);
// 	ft_putnbr(100142);
// 	write(1, " (100.142)\n", 12);
// 	ft_putnbr(1100142);
// 	write(1, " (1.100.142)\n", 14);
// 	ft_putnbr(10100142);
// 	write(1, " (10.100.142)\n", 15);
// 	ft_putnbr(142100142);
// 	write(1, " (142.100.142)\n", 16);
// 	ft_putnbr(1142100142);
// 	write(1, " (1.142.100.142)\n", 17);
// 	ft_putnbr(2147483647);
// 	write(1, " (2.147.483.647)\n", 17);
// 	ft_putnbr(-2147483648);
// 	write(1, " (-2.147.483.648)\n", 18);
// }
