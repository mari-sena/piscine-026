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
	int				aux;
	unsigned int	result;

	aux = 0;
	result = 0;
	while (s1[aux] != '\0' || s2[aux] != '\0')
	{
		if (s1[aux] == '\0')
			return (-((unsigned int)(s2[aux])));
		if (s2[aux] == '\0')
			return ((unsigned int)s1[aux]);
		if (s1[aux] != s2[aux])
			return (s1[aux] - s2[aux]);
		result = s1[aux] - s2[aux];
		s1++;
		s2++;
	}
	return (result);
}

void	ft_swap(char *a, char *b)
{
	char	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_sort_params(char *str, int size)
{
	int	index1;
	int	index2;

	index1 = 0;
	while (index1 < (size - 1))
	{
		index2 = 0;
		while (index2 < (size - index1 - 1))
		{
			if (str[index2] > str[index2 + 1])
				ft_swap(&str[index2], &str[index2 + 1]);
			index2++;
		}
		index1++;
	}
}

void	ft_putstr(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux])
	{
		write(1, &str[aux], 1);
		aux++;
	}
}

int	main(int argc, char *argv[])
{
	int	index;
	int	index2;

	index = 1;
	if (argc > 1)
	{
		while (index < argc)
		{
			ft_sort_params(argv[index], ft_strlen(argv[index]));
			ft_putstr(argv[index]);
			ft_putstr("\n");
			++index;
		}
		index = 1;
		while (index < (argc - 1))
		{
			index2 = 1;
			while (index2 < (argc - index - 1))
			{
				if (ft_strcmp(argv[index2], argv[index2 + 1]) > 0)
				{
					ft_putstr(argv[index2]);
					ft_putstr("\n");
				}
				index2++;
			}
			++index;
		}
	}
	return (0);
}