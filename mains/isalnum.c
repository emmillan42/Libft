/* //Testing the function with some characters
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("char\tprint\tisalnum\tft_isalnum\n");
	for (int i = 0; i <= 255; i++)
	{
		printf("%d\t", i);
		if (ft_isprint(i))
			printf("%c\t", i);
		else
			printf("-\t");
		printf("%d\t", isalnum(i));
		printf("%d\n", ft_isalnum(i));
	}
	return (0);
} */
