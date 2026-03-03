/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 11:42:27 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/02 16:38:33 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	aux;

	aux = 0;
	if (str[aux] == '\0')
		return (1);
	while (str[aux] != '\0')
	{
		if ((str[aux] >= 'a' && str[aux] <= 'z'))
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

// 	printf("%d\n", ft_str_is_lowercase(str));
// 	printf("%d\n", ft_str_is_lowercase(str1));
// 	printf("%d\n", ft_str_is_lowercase(str2));
// 	printf("%d", ft_str_is_lowercase(str3));
// 	return (0);
// }
