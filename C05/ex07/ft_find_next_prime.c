/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:34:49 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/11 16:34:50 by mariafer         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	else
	{
		while (!ft_is_prime(nb))
			nb += 1;
		return (nb);
	}
}

// #include <stdio.h>
// int	main(void)
// {
//     int	nb;
// 	nb = 422;
//     printf("%d", ft_find_next_prime(nb));
//     return (0);
// }