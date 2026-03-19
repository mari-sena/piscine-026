/*
Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que imprima os números de 1 a 100, cada um separado por uma nova linha.

Se o número for múltiplo de 3, deve imprimir "fizz" em vez do número.

Se o número for múltiplo de 5, deve imprimir "buzz" em vez do número.

Se o número for múltiplo de 3 e de 5 ao mesmo tempo, deve imprimir "fizzbuzz" em vez do número.

Exemplo:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$>
*/

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char	cnbr;

	if (nbr > 9)
		ft_putnbr(nbr / 10);
	cnbr = (nbr % 10) + '0';
	write(1, &cnbr, 1);
}

void	ft_fizzbuzz()
{
	int	index;

	index = 1;
	while (index < 101)
	{
		if (((index % 5) == 0)
			&& ((index % 3) == 0))
			write(1, "fizzbuzz", 8);
		else if ((index % 5) == 0)
			write(1, "buzz", 4);
		else if ((index % 3) == 0)
			write(1, "fizz", 4);
		else
			ft_putnbr(index);
		write (1, "\n", 1);
		index++;
	}
}

int	main(void)
{
	ft_fizzbuzz();
	return (0);
}
