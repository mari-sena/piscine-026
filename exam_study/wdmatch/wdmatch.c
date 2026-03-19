/*
Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que recebe duas strings e verifica se é possível
escrever a primeira string usando caracteres da segunda string, respeitando
a ordem em que esses caracteres aparecem na segunda string.

Se for possível, o programa exibe a string seguida de um \n; caso contrário,
ele simplesmente exibe um \n.

Se o número de argumentos não for 2, o programa exibe um \n.

Exemplos:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
            }
$
*/

#include <unistd.h>

int ft_strlen(char *str)
{
    int index;

    index = 0;
    while (str[index])
        index++;
    return (index);
}
int main(int argc, char **argv)
{
    int index;
    int index2;
    int odio;

    index = 0;
    index2 = 0;
    odio = 0;
    if (argc == 3)
    {
        while (argv[1][index])
        {
            while (argv[2][index2])
            {
                if (argv[1][index] == argv[2][index2])
                {
                    odio++;
                    index++;
                    index2++;
                }
                index2++;
            }
            index++;
        }
        if (odio == ft_strlen(argv[1]))
            write(1, argv[1], ft_strlen(argv[1]));
        else
            write(1, "\n", 1);
    }
    return (0);
}
