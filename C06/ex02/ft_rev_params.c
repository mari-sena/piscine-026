/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 10:46:29 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/12 10:46:31 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(char *params)
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

	if (argc > 1)
	{
		index = argc - 1;
		while (index > 0)
		{
			ft_rev_params(argv[index]);
			index--;
		}
	}
	return (0);
}
