/* //Testing the function with some strings
#include <string.h>
#include <stdio.h>
#include <bsd/string.h> // on Linux, compile with flag -lbsd

void	test(size_t dsize)
{
	char	string1[20] = "Hello ";
	char	string2[20] = "Hello ";
	char	add[] = "World of 42!";
	size_t	original_result;
	size_t	my_result;

	printf("=== size = %zu ===\n", dsize);
	original_result = strlcat(string1, add, dsize);
	my_result = ft_strlcat(string2, add, dsize);
	printf("strlcat    : '%s'\n", string1);
	printf("return     : %zu\n", original_result);
	printf("ft_strlcat : '%s'\n", string2);
	printf("return     : %zu\n\n", my_result);
}

void	test_full_buffer(void)
{
	char	string1[5] = "1234";
	char	string2[5] = "1234";
	char	add[] = "ABC";
	size_t	original_result;
	size_t	my_result;

	printf("=== full buffer test ===\n");
	original_result = strlcat(string1, add, 5);
	my_result = ft_strlcat(string2, add, 5);
	printf("strlcat    : '%s'\n", string1);
	printf("return     : %zu\n", original_result);
	printf("ft_strlcat : '%s'\n", string2);
	printf("return     : %zu\n\n", my_result);
}

int	main(void)
{
	test(0);
	test(4);
	test(6);
	test(10);
	test(19);
	test(25);
	test_full_buffer();
	return (0);
} */
