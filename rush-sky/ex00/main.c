/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 16:32:27 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/06 16:32:47 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
		aux++;
	return (aux);
}

void    ft_write_error(void)
{
    write(1, "Error\n", 7);
}

void    ft_validate(char *)
{
    // IF success
        // 1 2 3 4
        // 2 3 4 1
        // 3 4 1 2
        // 4 1 2 3
    
    // write(1, , 4);
    // ELSE
   ft_write_error();
}

void    rush(char *arg)
{
    int aux;
    int input_values[ft_strlen(arg)];

    aux = 0;
    while (arg[aux] != '\0')
    {
        if ((aux % 2) == 0)
            input_values[aux] = arg[aux];
        aux++;
    }
    ft_validade(input_values);
}

int	main(int argc, char **argv)
{
    if (argc != 2)
    {
        ft_write_error();
        return (0);
    }
    rush(argv[1]);
	return (0);
}


// Numero enviado pelo usuario e valido? Imprime desenho
// Nao e valido? Imprime Error