/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 16:11:57 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/15 10:19:47 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux])
		aux++;
	return (aux);
}

void	ft_def_args(char **nb, int argc, char *argv[], char **dict_name)
{
	if (argc == 2)
		*nb = argv[1];
	if (argc == 3)
	{
		*dict_name = argv[1];
		*nb = argv[2];
	}
}

int	ft_is_valid_number(char *nb)
{
	int	index;

	index = 0;
	while (nb[index] != '\0')
	{
		if (nb[index] < '0' || nb[index] > '9')
		{
			write(1, "Error\n", 6);
			return (1);
		}
		index++;
	}
	return (0);
}

int	ft_read_dict(char *dict_name, char *dict_values, int size)
{
	int		dict_file;
	int		bytes_to_read;

	dict_file = open(dict_name, O_RDONLY);
	if (dict_file == -1)
	{
		write(1, "Dict Error\n", 11);
		return (1);
	}
	bytes_to_read = read(dict_file, dict_values, size - 1);
	close(dict_file);
	if (bytes_to_read < 0)
	{
		write(1, "Dict Error\n", 11);
		return (1);
	}
	dict_values[bytes_to_read] = '\0';
	return (0);
}

int	ft_baby_atoi(char *str)
{
	int	index;
	int	result;

	index = 0;
	result = 0;
	while (str[index] >= '0' && str[index] <= '9')
	{
		result *= 10;
		result += (int)str[index] - 48;
		index++;
	}
	return (result);
}

char	*ft_str_range(char *start, char *end)
{
	int		index;
	char	*dest;

	dest = (char *)malloc((end - start) + 1);
	if (!dest)
		return (NULL);
	index = 0;
	while (start < end)
	{
		dest[index] = *start;
		start++;
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int		ft_is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r');
}
