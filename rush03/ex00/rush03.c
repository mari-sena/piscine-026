/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 16:20:04 by mariafer          #+#    #+#             */
/*   Updated: 2026/02/27 16:36:10 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_handle_negative_numbers(int col, int row)
{
	if (col < 0 || row < 0)
		write(1, "Not allowed", 11);
}

void	rush(int x, int y)
{
	int	row;
	int	column;

	ft_handle_negative_numbers(x, y);
	row = 1;
	while (row <= y)
	{
		column = 1;
		while (column <= x)
		{
			if ((column == x && row == 1)
				|| (column == x && row == y))
			{
				ft_putchar('C');
			}
			else if ((column == 1 && row == 1)
				|| (column == 1 && row == y))
			{
				ft_putchar('A');
			}
			// else if (
			// 	(row == 1 && column != 1)
			// 	|| (row == 1 && column != x)
			// 	|| (row == y && column != 1)
			// 	|| (row == y && column != x)
			// 	|| (column == 1 && row != 1)
			// 	|| (column == x && row != 1)
			// 	|| (column == x && row != x))
			else if (row == 1 || column == 1 || column == x || row == y)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}
