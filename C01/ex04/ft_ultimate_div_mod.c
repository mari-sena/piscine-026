/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 15:53:37 by mariafer          #+#    #+#             */
/*   Updated: 2026/02/28 18:24:03 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*#include <stdio.h>
int    main(void)
{
	int*    a;
	int*    b;
	int aux_a = 10;
	int aux_b = 3;

	a = &aux_a;
	b = &aux_b;
	printf("%d\n", *a);
	printf("%d\n", *b);
	ft_ultimate_div_mod(a, b);
	printf("%d\n", *a);
	printf("%d", *b);
	return (0);
}*/
