/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 16:11:57 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/13 16:11:59 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

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
		if (nb[index] == '.')
		{
			write(1, "Error\n", 6);
			return (1);
		}
		index++;
	}
	return (0);
}

void	ft_read_dict(char *dict_name, char *dict_values)
{
	int		file;
	int		bytes;

	file = open(dict_name, O_RDONLY);
	bytes = read(file, dict_values, 695);
	if (file != -1)
	{
		// 					ME REMOVA  \\//
		// Imprime o conteudo do dict   \/
		// write(1, dict_values, bytes);
		close(file);
	}
}
