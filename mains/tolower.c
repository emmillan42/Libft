/* //Testing the function with some characters
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("char\tprint\ttolower\tft_tolower\n");
	for (int i = 0; i <= 255; i++)
	{
		printf("%d\t", i);
		if (i >= 32 && i <= 126)
			printf("%c\t", i);
		else
			printf("-\t");
		printf("%d\t", tolower(i));
		printf("%d\n", ft_tolower(i));
	}
	return (0);
} */
