/* //Testing the Function with some strings
#include <stdio.h>

int	main(void)
{
	char	s1[] = "Hello";
	char	s2[] = " ";
	char	s3[] = "42!";

	printf("Initial string : \"%s\"\n", s1);
	char	*joined1 = ft_strjoin(s1, s2);
	if (!joined1)
		printf("Memory allocation failed.\n");
	else
		printf("Joined string : \"%s\"\n", joined1);
	char	*joined2 = ft_strjoin(joined1, s3);
	if (!joined2)
		printf("Memory allocation failed.\n");
	else
		printf("Joined string : \"%s\"\n", joined2);
	free(joined1);
	free(joined2);
	return (0);
} */
