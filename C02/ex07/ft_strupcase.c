/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 11:09:53 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/03 11:09:55 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		if (str[aux] >= 'a' && str[aux] <= 'z')
			str[aux] = str[aux] - 32;
		aux++;
	}
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
//     char    str[] = "mariana";
//     char    str1[] = "luRiana";

//     printf("%s\n", ft_strupcase(str));
//     printf("%s\n", ft_strupcase(str1));
// }