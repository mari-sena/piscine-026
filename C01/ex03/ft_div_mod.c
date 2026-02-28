/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 15:32:12 by mariafer          #+#    #+#             */
/*   Updated: 2026/02/28 15:47:10 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*#include <stdio.h>
int	main(void)
{
	int	aux_a = 0;
	int	aux_b = 0;
	int*	mod;
	int*	div;

	div = &aux_a;
	mod = &aux_b;
	ft_div_mod(10, 3, div, mod);
	printf("Quociente: %d\n", aux_a);
	printf("Resto: %d", aux_b);
	return (0);
}*/
