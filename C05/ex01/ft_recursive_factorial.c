/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 18:12:14 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/10 18:12:16 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_factorial(int *nb, int result)
{
	while (nb > 0)
	{
		result *= *nb;
		*nb = *nb - 1;
	}
	return (result);
}

int ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	
	result = ft_factorial(&nb, result);
	return (result);
}

#include <stdio.h>
int main(void)
{
    ft_recursive_factorial(0);
    return (0);
}