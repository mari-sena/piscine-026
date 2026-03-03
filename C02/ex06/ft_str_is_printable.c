/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 17:01:38 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/02 17:06:35 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	aux;

	aux = 0;
	if (str[aux] == '\0')
		return (1);
	while (str[aux] != '\0')
	{
		if (str[aux] > 31)
			aux++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	str[] = "1";
// 	char	str2[] = "a";
// 	char	str3[] = "\x02";
// 	char	str4[] = "";

// 	printf("%d\n", ft_str_is_printable(str));
// 	printf("%d\n", ft_str_is_printable(str2));
// 	printf("%d\n", ft_str_is_printable(str3));
// 	printf("%d\n", ft_str_is_printable(str4));
// 	return (0);
// }
