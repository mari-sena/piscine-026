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
	char	*key;
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
			translations[index_dict].key =
				ft_str_range(&dict_values[index_start], &dict_values[index]);
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

#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	char			*nb;
	char			*dict_name;
	int				translator;
	int				translation_qty;
	char			dict_values[5000]; // ARRUME MEU TAMANHO
	struct s_dict	translations[100]; // ARRUME MEU TAMANHO

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
	translation_qty = ft_dict_sanitize(dict_values, translations);
	translator = 0;
	while (translator < translation_qty)
	{
		if (ft_strcmp(translations[translator].key, nb) == 0)
		{
			printf("%s\n", translations[translator].translation);
			break ;
		}
		translator++;
	}
	return(0);
	// Printar oq esta dentro do struct translations (dict estruturadinho)
	// int	index_struct;

	// index_struct = 0;
	// while (index_struct < translation_qty)
	// {
	// 	printf("%s -> %s\n",
	// 		translations[index_struct].key,
	// 		translations[index_struct].translation);
	// 	free(translations[index_struct].translation);
	// 	index_struct++;
	// }
	return (0);
}
