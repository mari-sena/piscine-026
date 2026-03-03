/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 11:36:06 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/03 11:36:42 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		if (str[aux] >= 'A' && str[aux] <= 'Z')
			str[aux] = str[aux] + 32;
		aux++;
	}
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
//     char    str[] = "MARIANA";
//     char    str1[] = "luRiana";

//     printf("%s\n", ft_strlowcase(str));
//     printf("%s\n", ft_strlowcase(str1));
// }