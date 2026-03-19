/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <mariafer@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:15:33 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/18 17:15:34 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		write (1, &str[counter], 1);
		counter++;
	}
}

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

void	ft_show_tab(struct s_stock_str *par)
{
	int	index;

	index = 0;
	while (par[index].str != 0)
	{
		ft_putstr(par[index].str);
		write (1, "\n", 1);
		ft_putnbr(par[index].size);
		write (1, "\n", 1);
		ft_putstr(par[index].copy);
		write (1, "\n", 1);
		index++;
	}
}

// int	main(void)
// {
// 	char	*av[] = {"cachorro", "gato", "papagaio"};
// 	int		ac;
// 	t_stock_str	*par;

// 	ac = 3;
// 	par = ft_strs_to_tab(ac, av);
// 	ft_show_tab(par);
// 	return (0);
// }