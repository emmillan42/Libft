/* //Testing the Function with some strings
#include <stdio.h>

char	roller_coaster(unsigned int i, char c)
{
	if (i % 2)
		return (ft_tolower(c));
	else
		return (ft_toupper(c));
}

int	main(void)
{
	char	str[] = "Hello everyone. Good to see you again !";
	char	*cpy;

	printf("Source : %s\n", str);
	cpy = ft_strmapi(str, &roller_coaster);
	if (!cpy)
		printf("An error occured.\n");
	else
		printf("Modified copy : %s\n", cpy);
	free(cpy);
	return (0);
} */
