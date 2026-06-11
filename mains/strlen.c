/* //Testing the function with some values
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*test = "Emmanuel Millan";
	int		len;
	char	*str1 = "Hello 42!";
	char	*str2 = "";

	len = ft_strlen(test);
	printf("The string lengh of '%s' is: %d\n", test, len);
	printf("Input: \"%s\"\n", str1);
	printf("strlen: %zu\n", strlen(str1));
	printf("ft_strlen: %zu\n\n", ft_strlen(str1));
	printf("Input: \"%s\"\n", str2);
	printf("strlen: %zu\n", strlen(str2));
	printf("ft_strlen: %zu\n", ft_strlen(str2));
	return (0);
} */
