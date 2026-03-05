char    *ft_strcat(char *dest, char *src)
{
	int	aux_dest;
	int	aux_src;

	aux_dest = 0;
	aux_src = 0;
	while (dest[aux_dest] != '\0')
	{
		dest[aux_dest] = dest[aux_dest];
		aux_dest++;
	}
	while (src[aux_src] != '\0')
	{
		dest[aux_dest] = src[aux_src];
		aux_src++;
		aux_dest++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char	dest[] = "Hello ";
//     char	src[] = "World!";
//     char	dest2[] = "Hello ";
//     char	src2[] = "World!";

//     printf("%s\n", ft_strcat(dest, src));
//     printf("%s", strcat(dest2, src2));
//     return (0);
// }