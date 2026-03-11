/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:46:11 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/11 15:46:13 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	aux;

	aux = nb - 1;
	if (nb < 2)
		return (0);
	while ((nb % aux) != 0)
		--aux;
	if (aux == 1)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     int	nb;
// 	// Retorne 1 se for primo
// 	// Retorne 0 se nao for

// 	nb = 1;
//     printf("%d", ft_is_prime(nb));
//     return (0);
// }