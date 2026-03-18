/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <mariafer@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 10:14:06 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/18 10:14:08 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sep(char c, char *charset)
{
	int	index;

	index = 0;
	while (charset[index])
	{
		if (charset[index] == c)
			return (1);
		index++;
	}
	return (0);
}

int	ft_word_counter(char *str, char *charset)
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (str[index])
	{
		while (str[index] && ft_is_sep(str[index], charset))
			index++;
		if (str[index])
			count++;
		while (str[index] && !ft_is_sep(str[index], charset))
			index++;
	}
	return (count);
}

char	*ft_word_cpy(int start, int end, char *str)
{
	char	*dest;
	int		index;

	dest = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!dest)
		return (NULL);
	index = 0;
	while (start < end)
		dest[index++] = str[start++];
	dest[index] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;
	int		str_i;
	int		dest_i;
	int		start;

	dest = (char **)malloc(sizeof(char *)
			* (ft_word_counter(str, charset) + 1));
	if (!dest)
		return (NULL);
	str_i = 0;
	dest_i = 0;
	while (str[str_i])
	{
		while (str[str_i] && ft_is_sep(str[str_i], charset))
			str_i++;
		start = str_i;
		while (str[str_i] && !ft_is_sep(str[str_i], charset))
			str_i++;
		if (str_i > start)
			dest[dest_i++] = ft_word_cpy(start, str_i, str);
	}
	dest[dest_i] = NULL;
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int		index;
// 	char	charset[] = ",;";
// 	char	str[] = "ola,42sp;legal";
// 	char	**result = NULL;

// 	index = 0;
// 	result = ft_split(str, charset);
// 	while (result[index])
// 	{
// 		printf("%s", result[index]);
// 		index++;
// 	}
// 	index = 0;
// 	while (result[index])
// 	{
// 		free(result[index]);
// 		index++;
// 	}
// 	free(result);
// 	return (0);
// }
