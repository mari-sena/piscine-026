/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:04:40 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/11 18:04:41 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *params)
{
	int	index;

	index = 0;
	while (params[index] != '\0')
	{
		write (1, &params[index], 1);
		index++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	index;

	index = 1;
	if (argc > 1)
	{
		while (index < argc)
		{
			ft_print_params(argv[index]);
			index++;
		}
	}
	return (0);
}
