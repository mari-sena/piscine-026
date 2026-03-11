/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 10:27:37 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/11 10:27:38 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		--power;
	}
	return (result);
}

// #include <stdio.h>
// int main(void)
// {
//     int nb;
//     int power;

//     nb = -5;
//     power = 3;
//     // coloque dentro do loop while
//     // printf("power[%d]: %d\n", power, result);
//     printf("%d", ft_iterative_power(nb, power));
//     return (0);
// }