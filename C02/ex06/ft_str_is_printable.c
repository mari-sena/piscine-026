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
	int	str_size;

	str_size = 0;
	while (*str != '\0')
	{
		str_size++;
		if (*str > 31)
			str++;
		else
			return (0);
	}
	if (str[str_size] != '\0' && str[str_size + 1] == '\0')
		return (1);
	else
		return (0);
}

#include <stdio.h>
int	main(void)
{
	char	str[] = "s\0s";

	printf("%d", ft_str_is_printable(str));
	return (0);
}