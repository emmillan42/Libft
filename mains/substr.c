/* //Testing the Function with some strings
#include <stdio.h>

int	main(void)
{
	char	string[] = "Hello evreryone !";
	char	*sub1 = ft_substr(string, 0, 5);
	char	*sub2 = ft_substr(string, 6, 30);
	char	*sub3 = ft_substr(NULL, 5, 5);

	printf("Source : %s\n", string);
	if (!sub1)
		printf("An error occured.\n");
	else
		printf("Substring from i = %d of length len = %d\n%s\n", 0, 5, sub1);
	if (!sub2)
		printf("An error occured.\n");
	else
		printf("Substring from i = %d of length len = %d\n%s\n", 6, 30, sub2);
	if (!sub3)
		printf("An error occured.\n");
	else
		printf("Substring from i = %d of length len = %d\n%s\n", 5, 5, sub3);
	free(sub1);
	free(sub2);
	free(sub3);
} */
