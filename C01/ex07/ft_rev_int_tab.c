/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 11:18:27 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/01 11:18:38 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	temp;

	index = 0;
	while (index < (size / 2))
	{
		temp = tab[index];
		tab[index] = tab[size - 1];
		tab[size - 1] = temp;
		index++;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	tab[] = {3, 2, 1};
// 	int	size = 3;
// 	int	index = 0;

// 	printf("Antes: ");
// 	while (index < size)
// 		printf("%d ", tab[index++]);
// 	ft_rev_int_tab(tab, size);
// 	index = 0;
// 	printf("\nDepois: ");
// 	while (index < size)
// 		printf("%d ", tab[index++]);
// 	return (0);
// }
