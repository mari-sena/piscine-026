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

struct s_dict
{
	int		key;
	char	*translation;
};

int		ft_is_space(char c);
int		ft_strlen(char *str);
int		ft_baby_atoi(char *str);
int		ft_is_valid_number(char *nb);
int		ft_read_dict(char *dict_name, char *dict_values, int size);
void	ft_def_args(char **nb, int argc, char *argv[], char **dict_name);
char	*ft_str_range(char *start, char *end);

int	ft_dict_sanitize(char *dict_values, struct s_dict *translations)
{
	int	index;
	int	index_dict;
	int	index_start;

	index = 0;
	index_dict = 0;
	index_start = 0;
	while (dict_values[index] != '\0')
	{
		while (ft_is_space(dict_values[index]))
			index++;
		if (dict_values[index] != '\0')
		{
			index_start = index;
			while ((dict_values[index] >= '0')
				&& (dict_values[index] <= '9'))
				index++;
			// CORRIGIR: \/ Se vier letra no index isso vai retornar 0
			translations[index_dict].key
					= ft_baby_atoi(&dict_values[index_start]);
			while (ft_is_space(dict_values[index]))
				index++;
			if (dict_values[index] == ':')
				index++;
			while (ft_is_space(dict_values[index]))
				index++;
			index_start = index;
			while (dict_values[index] != '\n' && dict_values[index] != '\0')
				index++;
			translations[index_dict].translation =
				ft_str_range(&dict_values[index_start], &dict_values[index]);
			index_dict++;
		}
	}
	return (index_dict);
}

#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	char			*nb;
	char			*dict_name;
	char			dict_values[5000]; // ARRUME MEU TAMANHO
	struct s_dict	translations[5000]; // ARRUME MEU TAMANHO
	int	count_struct;
	int	index_struct;

	if (argc == 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	dict_name = "numbers.dict";
	ft_def_args(&nb, argc, argv, &dict_name);
	if (ft_is_valid_number(nb))
		return (0);
	if (ft_read_dict(dict_name, dict_values, 5000)) // ARRUME MEU TAMANHO
		return (0);
	count_struct = ft_dict_sanitize(dict_values, translations);
	index_struct = 0;
	while (index_struct < count_struct)
	{
		printf("%d -> %s\n",
			translations[index_struct].key,
			translations[index_struct].translation);
		free(translations[index_struct].translation);
		index_struct++;
	}
	return (0);
}
