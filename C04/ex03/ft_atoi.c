
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	index;
	int	signal_counter;
	int	result;

	index = 0;
	result = 0;
	signal_counter = 0;
	while (str[index])
	{
		// if (str[index] == '\f'
		// 	|| str[index] == '\n'
		// 	|| str[index] == '\r'
		// 	|| str[index] == '\t'
		// 	|| str[index] == ' ')
		if (str[index] == '-')
			signal_counter++;
		if (str[index] >= '0' && str[index] <= '9')
		{
			result *= 10;
			result += (int)str[index] - 48;
		}
		str++;
		index++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d", ft_atoi(argv[1]));
	return (0);
}
