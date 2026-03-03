/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 13:41:05 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/02 16:37:35 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	aux;

	aux = 0;
	if (str[aux] == '\0')
		return (1);
	while (str[aux] != '\0')
	{
		if ((str[aux] >= 'A' && str[aux] <= 'Z'))
			aux++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	str[] = "abc";
// 	char	str1[] = " abc";
// 	char	str2[] = "";
// 	char	str3[] = "ASD";

// 	printf("%d\n", ft_str_is_uppercase(str));
// 	printf("%d\n", ft_str_is_uppercase(str1));
// 	printf("%d\n", ft_str_is_uppercase(str2));
// 	printf("%d", ft_str_is_uppercase(str3));
// 	return (0);
// }
