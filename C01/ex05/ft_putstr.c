/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 16:37:38 by mariafer          #+#    #+#             */
/*   Updated: 2026/02/26 16:49:36 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	aux;
	int	str_length;

	aux = 0;
	str_length = 0;
	while (str[aux] != '\n')
	{
		str_length++;
		write(1, str[aux], 1);
	}
}
void	main(void)
{
	char	*str;
    char    text[6] = "astra";

	*str = text;
	ft_putstr(str);
}
