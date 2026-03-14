/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 16:05:42 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/13 16:05:43 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str);

void	ft_def_args(char **nb, int argc, char *argv[], char **dict_name);

int		ft_is_valid_number(char *nb);

void	ft_read_dict(char *dict_name, char *dict_values);

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

struct s_dict
{
	int		key;
	char	*translation;
};

#include <stdio.h>
void	ft_dict_sanitize(char *dict_values)
{
	int				index;
	int				index_keys;
	int				index_translation;
	int				index_dict_loop;
	struct s_dict	translations[5000]; // ARRUME MEU TAMANHO

	index = 0;
	index_keys = 0;
	index_translation = 0;
	while (dict_values[index] != '\0')
	{
		if (dict_values[index] != ' ')
		{
			index_dict_loop = index;
			while ((dict_values[index_dict_loop] >= '0')
				&& (dict_values[index_dict_loop] <= '9'))
			{
				// printf("%c\n", dict_values[index_dict_loop]);
				translations[index_keys].key
					= ft_baby_atoi(&dict_values[index_dict_loop]);
				// printf("%d\n", translations[index_keys].key);
				index_dict_loop++;
			}
			if (dict_values[index + 1] == ':')
				index_keys++;
			index_dict_loop = index;
			while (((dict_values[index_dict_loop] > 33)
				&& (!((dict_values[index_dict_loop] >= '0')
					&& (dict_values[index_dict_loop] <= '9')))
				&& (dict_values[index_dict_loop] != ':')))
			{
				// printf("%c\n", dict_values[index_dict_loop]);
				translations[index_translation].translation = &dict_values[index_dict_loop];
				index_dict_loop++;
			}
			if ((dict_values[index + 1] >= '0')
				&& (dict_values[index + 1] <= '9'))
				index_translation++;
		}
		index++;
	}
	// printf("%d\n", translations[1].key);
	printf("%s", translations[0].translation);
}

int	main(int argc, char *argv[])
{
	char	*nb;
	char	*dict_name;
	char	dict_values[695];

	if (argc == 1)
	{
		write(1, "Error", 5);
		return (0);
	}
	dict_name = "numbers.dict";
	ft_def_args(&nb, argc, argv, &dict_name);
	if (ft_is_valid_number(nb))
		return (0);
	ft_read_dict(dict_name, dict_values);
	ft_dict_sanitize(dict_values);
	// 					ME REMOVA  \\//
	// Imprime o conteudo o numer   \/
	// write(1, nb, ft_strlen(nb));
	return (0);
}
