// Assignment name  : rot_13
// Expected files   : rot_13.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays it, replacing each of its
// letters by the letter 13 spaces ahead in alphabetical order.

// 'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

// The output will be followed by a newline.

// If the number of arguments is not 1, the program displays a newline.

// Example:

// $>./rot_13 "abc"
// nop
// $>./rot_13 "My horse is Amazing." | cat -e
// Zl ubefr vf Nznmvat.$
// $>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
// NxwuM mYXVWm , 23l $
// $>./rot_13 | cat -e
// $
// $>
// $>./rot_13 "" | cat -e
// $
// $>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux])
		aux++;
	return (aux);
}

void    rot_13(char *str)
{
    int     index;
    int     index2;

    index = 0;
    while (str[index])
    {
        if ((str[index] >= 'A' && str[index] <= 'Z')
            || (str[index] >= 'a' && str[index] <= 'z'))
        {
            index2 = 13;
            while (index2 > 0)
            {
                if (str[index] == 'Z')
                {
                    str[index] = 'A';
                }
                else if (str[index] == 'z')
                {
                    str[index] = 'a';
                }
                else
                    str[index]++;
                index2--;
            }
        }
        index++;
    }
    write (1, str, ft_strlen(str));
}

int main(int argc, char *argv[])
{
    int index;

    if (argc > 1)
    {
        index = 1;
        while (index < argc)
        {
            rot_13(argv[index]);
            index++;
        }
    }
    write (1, "\n", 1);
    return (0);
}