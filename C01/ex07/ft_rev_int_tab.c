/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 15:14:33 by mariafer          #+#    #+#             */
/*   Updated: 2026/02/28 18:44:14 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;

	aux = size;
	while (aux <= size || aux == 0)
	{
		printf("%d", tab[aux]);
		//*tab[aux] = tab[aux];
		aux--;
	}	
}
int	main(void)
{
	int	arr[6] = {1, 2, 3, 4, 5, 6};
	int	*tab = arr;
	int	size = 6;

	ft_rev_int_tab(tab, size);
	return (0);
}
