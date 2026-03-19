/*
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Escreva uma função que converta o argumento de string str para um inteiro (tipo int) e o retorne.

Ela funciona de forma semelhante à função padrão atoi(const char *str), veja o manual (man).

Sua função deve ser declarada da seguinte forma:

int	ft_atoi(const char *str);
*/
#include <stdio.h>
int	ft_atoi(const char *str)
{
	int		cnum;
	// long	num;
	int		index;

	index = 0;
	cnum = 0;
	printf("%d\n", cnum);
	while (str[index])
	{
		cnum = str[index] - 48;
		
		index++;
	}
    return (0);
}


int	main(void)
{
	printf("%d\n", ft_atoi("2"));
	printf("%d\n", ft_atoi("42"));
	// printf("%d\n", ft_atoi("2.147.483.647"));
	// printf("%d\n", ft_atoi("-2.147.483.648"));
}
