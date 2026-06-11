/* //Testing the Function with some strings
#include <stdio.h>

int	main(void)
{
	char	string[] = " abc\nHello\t42! \tbbc \n";
	char	set[] = " abc\n\t";

	char	*trimmed = ft_strtrim(string, set);
	if (!trimmed)
		printf("An error occured.\n");
	else
		printf("Trimmed string : %s\n", trimmed);
	free(trimmed);
	return (0);
} */
