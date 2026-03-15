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

struct s_dict
{
	char	*key;
	char	*translation;
};

int		ft_is_space(char c);
int		ft_strlen(char *str);
int		ft_baby_atoi(char *str);
int		ft_is_valid_number(char *nb);
int		ft_strcmp(char *s1, char *s2);
int		ft_read_dict(char *dict_name, char *dict_values, int size);
void	ft_def_args(char **nb, int argc, char *argv[], char **dict_name);
char	*ft_str_range(char *start, char *end);

// [] Validar se o novo dict tem no minimo 41 keys
// [] 
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
			translations[index_dict].key
				= ft_str_range(&dict_values[index_start], &dict_values[index]);
			while (ft_is_space(dict_values[index]))
				index++;
			if (dict_values[index] == ':')
				index++;
			while (ft_is_space(dict_values[index]))
				index++;
			index_start = index;
			while (dict_values[index] != '\n' && dict_values[index] != '\0')
				index++;
			translations[index_dict].translation
				= ft_str_range(&dict_values[index_start], &dict_values[index]);
			index_dict++;
		}
	}
	if (index_dict < 41)
	{
		write(1, "Dict Error\n", 11);
		return (-1);
	}
	return (index_dict);
}

int	main(int argc, char *argv[])
{
	char			*nb;
	char			*dict_name;
	int				index;
	int				translation_qty;
	char			dict_values[5000];
	struct s_dict	translations[100];

	if (argc == 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	dict_name = "numbers.dict";
	ft_def_args(&nb, argc, argv, &dict_name);
	if (ft_is_valid_number(nb))
		return (0);
	if (ft_read_dict(dict_name, dict_values, 5000))
		return (0);
	
	translation_qty = ft_dict_sanitize(dict_values, translations);
	if (translation_qty == -1)
		return (0);
	index = 0;
	while (index < translation_qty)
	{
		if (ft_strcmp(translations[index].key, nb) == 0)
		{
			write(1,
				translations[index].translation,
				ft_strlen(translations[index].translation));
			write(1, "\n", 1);
			break ;
		}
		index++;
	}
	return (0);
}
