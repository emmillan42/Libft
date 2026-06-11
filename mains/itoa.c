/* //Testing the Function with some numbers
#include <stdio.h>

int	main(void)
{
	char	*str;
	int		integers[5] = {12345, -98765, 0, -2147483648, 2147483647};

	for (int i = 0; i < 5; i++)
	{
		printf("Input : %d\n", integers[i]);
		str = ft_itoa(integers[i]);
		if (!str)
			printf("Memory allocation failed.\n\n");
		else
		{
			printf("itoa : %s\n\n", str);
			free(str);
		}
	}
	return (0);
} */
