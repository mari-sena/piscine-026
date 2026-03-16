/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:09:22 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/16 12:09:24 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int ft_ultimate_range(int **range, int min, int max)
{
    int size;
    int index;

    if (min >= max)
    {
        *range = NULL;
        return (0);
    }
    size = max - min;
    // *range = (int *)malloc(sizeof(int) * size);
    // range[size*4];//heap vs stack 
    // https://www.geeksforgeeks.org/c/difference-between-int-a-and-int-a-in-c/
    if (!*range)
        return (-1);
    index = 0;
    while (index < size)
    {
        *range[index] = index;
        printf("%d\n", *range[index]);
        index++;
    }
    return (index);
}

int main(void)
{
    int *range;
    ft_ultimate_range(&range, 0, 10);
}