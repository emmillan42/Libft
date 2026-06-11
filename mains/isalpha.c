/* //Testing the function with some strings
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("char\tprint\tisalpha\tft_isalpha\n");
	for (int i = 0; i <= 255; i++)
	{
		printf("%d\t", i);
		if (ft_isprint(i))
			printf("%c\t", i);
		else
			printf("-\t");
		printf("%d\t", isalpha(i));
		printf("%d\n", ft_isalpha(i));
	}
	return (0);
} */
