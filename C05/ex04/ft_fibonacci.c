/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 11:53:31 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/11 11:53:33 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	next;
	int	result;
	int	temp;

	result = 1;
	next = 0;
	temp = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	while (index > 0)
	{
		temp = result;
		result = temp + next;
		next = temp;
		index--;
	}
	return (temp);
}

// #include <stdio.h>
// #include <stdio.h>
// int	main(void)
// {
// 	int	index;

// 	index = 6;
// 	// ft_fibonacci(index);
// 	printf("%d\n", ft_fibonacci(index));
// 	return (0);
// }
