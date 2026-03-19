/*
Assignment name  : maff_alpha
Expected files   : maff_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que exiba o alfabeto, com as letras em posições pares em maiúsculo
 e as letras em posições ímpares em minúsculo, seguido de uma quebra de linha.

Exemplo:

$> ./maff_alpha | cat -e
aBcDeFgHiJkLmNoPqRsTuVwXyZ$
*/

#include <unistd.h>

int main(void)
{
    char index;
    char c;

    index = 'a';
    while (index <= 'z')
    {
        if (index % 2)
            write (1, &index, 1);
        else
        {
            c = index - 32;
            write (1, &c, 1);
        }   
        index++;
    }
    return (0);
}