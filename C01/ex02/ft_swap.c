/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 14:23:38 by mariafer          #+#    #+#             */
/*   Updated: 2026/02/26 15:31:29 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
/*#include <stdio.h>
void    main(void)
{
    int aux_a = 0;
    int aux_b = 1;
    int*    a;
    int*    b;

    a = &aux_a;
    b = &aux_b;
    printf("%d\n", aux_a);
    printf("%d\n", aux_b);
    ft_swap(a, b);
    printf("%d\n", aux_a);
    printf("%d", aux_b);
}*/
