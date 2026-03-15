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

void	ft_read_dict(char *dict_name);

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

struct s_dict
{
	int		key;
	char	*translation;
};

#include <stdio.h>
void	ft_dict_sanitize(char *dict_values)
{
	int				index;
	int				index_dict;
	int				index_start;
	struct s_dict	translations[5000]; // ARRUME MEU TAMANHO

	index = 0;
	index_dict = 0;
	index_start = 0;
	while (dict_values[index] != '\0')
	{
		if (dict_values[index] != ' ' || dict_values[index] != '\n')
		{
			index_start = index;
			while ((dict_values[index] >= '0')
				&& (dict_values[index] <= '9'))
				index++;
			translations[index_dict].key
					= ft_baby_atoi(&dict_values[index_start]);
			if (dict_values[index] == ':' && dict_values[index] == ' ')
				index++;
			index_start = index;
			while (dict_values[index] != '\n' || dict_values[index] != '\0')
				index++;
			translations[index_dict].translation =
				ft_str_range(&dict_values[index_start], &dict_values[index]);
			index_dict++;
		}
		index++;
		printf("%d\n", translations[1].key);
		printf("%s\n", translations[0].translation);
	}
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
	ft_read_dict(dict_name);
	ft_dict_sanitize(dict_values);
	return (0);
}
