/* //Testing the function with some strings
#include <string.h>
#include <stdio.h>

void	test(const char *str1, const char *str2, int n)
{
	printf("%s vs %s (%d characters)\n", str1, str2, n);
	printf("strncmp : %d\n", strncmp(str1, str2, n));
	printf("ft_strncmp : %d\n\n", ft_strncmp(str1, str2, n));
}

int	main(void)
{
	test("apple", "apple", 6);
	test("apple", "apples", 5);
	test("apple", "apples", 6);
	test("apple", "42", 1);
	test("programming", "programmers", 8);
	test("programming", "programmers", 9);
	test("\200", "\0", 1);
	test("\x12\xff\x65\x12\xbd\xde\xad", "\x12\x02", 6);
	return (0);
} */
