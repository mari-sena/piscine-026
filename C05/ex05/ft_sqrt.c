/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 14:59:50 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/11 14:59:52 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
    int aux;

    aux = 1;
    while (nb != aux * aux && nb > aux)
        aux++;
    if (nb == aux)
        return (0);
    return (aux);
}

// #include <stdio.h>
// int main(void)
// {
//     int nb;

//     nb = 81;
//     printf("%d", ft_sqrt(nb));
//     return (0);
// }