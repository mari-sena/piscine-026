/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 15:14:33 by mariafer          #+#    #+#             */
/*   Updated: 2026/02/27 15:23:47 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;

	aux = size;
	while (aux >= size)
	{
		printf("%d", tab[aux]);
		//*tab[aux] = tab[aux];
		aux--;
	}	
}

void	main(void)
{
	int	*tab;
	int	size;

	size = 6;
	tab[size] = [1, 2, 3, 4, 5, 6];
	ft_rev_int_tab(tab, size);
}
