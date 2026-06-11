/* //Testing the Function with some strings
#include <stdio.h>

void	roller_coaster(unsigned int i, char *c)
{
	if (i % 2)
		*c = ft_tolower(*c);
	else
		*c = ft_toupper(*c);
}

int	main(void)
{
	char	str[] = "Hello everyone. Good to see you again !";

	printf("Before ft_striteri : %s\n", str);
	ft_striteri(str, &roller_coaster);
	printf("After ft_striteri : %s\n", str);
	return (0);
} */
