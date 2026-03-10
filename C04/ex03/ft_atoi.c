/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 15:25:56 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/08 15:25:57 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_handle_spaces(int index, char *str)
{
	while (str[index] == ' '
		|| str[index] == '\n'
		|| str[index] == '\f'
		|| str[index] == '\r'
		|| str[index] == '\t')
		index++;
	return (index);
}

int	ft_handle_signs(int *signal_counter, int index, char *str)
{
	while (str[index] == '-'
		|| str[index] == '+')
	{
		if (str[index] == '-')
			*signal_counter = *signal_counter + 1;
		index++;
	}
	return (index);
}

int	ft_handle_numbers(int result, int index, char *str)
{
	while (str[index] >= '0' && str[index] <= '9')
	{
		result *= 10;
		result += (int)str[index] - 48;
		index++;
	}
	return (result);
}

int	ft_atoi(char *str)
{
	int	index;
	int	signal_counter;
	int	result;

	index = 0;
	result = 0;
	signal_counter = 0;
	index = ft_handle_spaces(index, str);
	index = ft_handle_signs(&signal_counter, index, str);
	result = ft_handle_numbers(result, index, str);
	if (signal_counter % 2)
		result *= -1;
	return (result);
}

// int	main(int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (0);
// 	printf("%d", ft_atoi(argv[1]));
// 	return (0);
// }
