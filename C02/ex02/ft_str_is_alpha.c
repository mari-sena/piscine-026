/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 10:46:49 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/02 11:07:00 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	aux;

	aux = 0;
	if (str[aux] == '\0')
		return (1);
	while (str[aux] != '\0')
	{
		if ((str[aux] >= 'A' && str[aux] <= 'Z')
			|| (str[aux] >= 'a' && str[aux] <= 'z'))
			aux++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	str[] = "";
// 	char	str1[] = " FASFSD";
// 	char	str2[] = "as 4dfsadkjf";
// 	char	str3[] = "adbcefghijkl";

// 	printf("%d\n", ft_str_is_alpha(str));
// 	printf("%d\n", ft_str_is_alpha(str1));
// 	printf("%d\n", ft_str_is_alpha(str2));
// 	printf("%d\n", ft_str_is_alpha(str3));
// 	return (0);
// }
