/* //Testing the function with some strings
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	string[] = "Hello world !";
	int			chr[9] = {'H', 'o', ' ', 'c', 'l', '!', '\0',
		'\x7f', 'H' + 256};

	printf("Source : %s\n\n", string);
	for (int i = 0; i < 9; i++)
	{
		printf("Looking for '%c'\n", chr[i]);
		printf("strchr : \t%p\t%lu\n", strrchr(string, chr[i]),
			(unsigned long)strrchr(string, chr[i]));
		printf("ft_strchr : \t%p\t%lu\n\n", ft_strrchr(string, chr[i]),
			(unsigned long)ft_strrchr(string, chr[i]));
	}
	return (0);
} */
