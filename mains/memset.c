/* //Testing the function with some values
#include <stdio.h>
#include <string.h>

void	print_bytes(const void *s, int n)
{
	printf("Memory : ");
	for (int i = 0; i < n; i++)
		printf("%d ", ((unsigned char *)s)[i]);
	printf("\n");
}

void	test(char c, size_t len)
{
	char	string1[30] = "Como estan los maquinas";
	char	string2[30] = "Como estan los maquinas";

	printf("Input : \"%s\"\n", string1);
	print_bytes(string1, 30);
	printf("Settings %ld '%c'\n", len, c);
	memset(string1, c, len);
	ft_memset(string2, c, len);
	printf("memset : %s\n", string1);
	print_bytes(string1, 30);
	printf("ft_memset : %s\n", string2);
	print_bytes(string2, 30);
	printf("\n");
}

int	main(void)
{
	test('A', 0);
	test('x', 5);
	test(122, 20);
	test(69, 30);
	return (0);
} */
