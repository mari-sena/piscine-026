/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 14:09:13 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/05 14:09:53 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    src_counter;
    unsigned int    dest_counter;
    unsigned int    result_counter;

    src_counter = 0;
    dest_counter = 0;
    result_counter = 0;
    while (src[src_counter] != '\0' && (src_counter <= (size)))
    {
        result_counter++;
        src_counter++;
    }
    while (dest[dest_counter] != '\0' && (dest_counter <= (size)))
    {
        result_counter++;
        dest_counter++;
    }
    return (result_counter);
}

#include <stdio.h>
#include <bsd/string.h>

void run_test(char *d, char *s, unsigned int size)
{
    //cc -Wall -Wextra -Werror -lbsd ft_strlcat.c
	char dest1[50];
	char dest2[50];
	unsigned int r1;
	unsigned int r2;
	int i;

	i = 0;
	while (d[i])
	{
		dest1[i] = d[i];
		dest2[i] = d[i];
		i++;
	}
	dest1[i] = '\0';
	dest2[i] = '\0';

	r1 = ft_strlcat(dest1, s, size);
	r2 = strlcat(dest2, s, size);

	printf("dest=\"%s\" src=\"%s\" size=%u\n", d, s, size);
	printf("(ft_strlcat): %u\n", r1);
	printf("(strlcat): %u\n\n", r2);
	printf("-----------------------------------\n\n");
}

int	main(void)
{
	run_test("Hello", "World", 20);
	run_test("Hello", "World", 10);
	run_test("Hello", "World", 8);
	run_test("Hello", "World", 5);
	run_test("", "World", 10);
	run_test("Hello", "", 10);
	run_test("Hello", "World", 0);
	run_test("123456", "ABC", 6);
	run_test("123", "456789", 5);
	run_test("A", "B", 2);
	run_test("Test", "12345", 6);

	return (0);
}
