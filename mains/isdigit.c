/* //Testing the function with some characters
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("char\tprint\tisdigit\tft_isdigit\n");
	for (int i = 0; i <= 255; i++)
	{
		printf("%d\t", i);
		if (ft_isprint(i))
			printf("%c\t", i);
		else
			printf("-\t");
		printf("%d\t", isdigit(i));
		printf("%d\n", ft_isdigit(i));
	}
	return (0);
} */
