/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:02:40 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/11 18:02:41 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *arg)
{
	int	index;

	index = 0;
	while (arg[index] != '\0')
	{
		write (1, &arg[index], 1);
		index++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		ft_print_program_name(argv[0]);
	return (0);
}
