/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 10:01:35 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/14 10:01:37 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	index;
	int	*arr_ints;
	int	length;

	index = 0;
	length = max - min;
	arr_ints = (int *)malloc(length * 4);
	if (min >= max || !arr_ints)
		return (NULL);
	while (index < length)
	{
		arr_ints[index] = min++;
		index++;
	}
	return (arr_ints);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int *nums;
// 	int min = -5;
// 	int max = 5;
// 	int index;

// 	index = 0;
// 	nums = ft_range(min, max);
// 	while (index < (max - min))
// 	{
// 		printf("%d, ", nums[index]);
// 		index++;
// 	}
// 	// valgrind --leak-check=full ./a.out
// 	// free(nums);
// 	return (0);
// }