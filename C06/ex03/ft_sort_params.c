/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:47:59 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/12 11:48:01 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux])
		aux++;
	return (aux);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] && s2[index] && s1[index] == s2[index])
		index++;
	return (s1[index] - s2[index]);
}

void	ft_sort_params(char *argv[], int argc)
{
	char	*swap;
	int		index;
	int		index2;

	index = 1;
	while (index < argc - 1)
	{
		index2 = 1;
		while (index2 < argc - index)
		{
			if (ft_strcmp(argv[index2], argv[index2 + 1]) > 0)
			{
				swap = argv[index2];
				argv[index2] = argv[index2 + 1];
				argv[index2 + 1] = swap;
			}
			index2++;
		}
		index++;
	}
}

int	main(int argc, char *argv[])
{
	int	index;

	if (argc > 1)
	{
		ft_sort_params(argv, argc);
		index = 1;
		while (index < argc)
		{
			write(1, argv[index], ft_strlen(argv[index]));
			write(1, "\n", 1);
			index++;
		}
	}
	return (0);
}
