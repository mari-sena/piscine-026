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

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		ref_beggning;
	int		ref_last;

	ref_beggning = 0;
	ref_last = size - 1;
	while (ref_beggning <= size - 1)
	{
		tab[ref_beggning] = tab[ref_last];
		ref_beggning++;
		ref_last--;
	}
	// ref_beggning = 0;
	// while (ref_beggning <= size - 1)
	// {
	// 	tab[ref_beggning] = arr_ref_beggning[ref_beggning];
	// 	ref_beggning++;
	// 	ref_last--;
	// }
}

int main(void)
{
	int	size = 6;
	int num[] = {1, 2, 3, 4, 5, 6};

    printf("%d\n", num[0]);
    printf("%d\n", num[1]);
    printf("%d\n", num[2]);
    printf("%d\n", num[3]);
    printf("%d\n", num[4]);
    printf("%d\n\n", num[5]);
    ft_rev_int_tab(num, size);
    printf("%d\n", num[0]);
    printf("%d\n", num[1]);
	printf("%d\n", num[2]);
	printf("%d\n", num[3]);
    printf("%d\n", num[4]);
    printf("%d\n", num[5]);
    return (0);
}
