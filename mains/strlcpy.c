/* //Testing the function with some strings
#include <stdio.h>
#include <string.h>
#include <bsd/string.h> // on Linux compile with flag -lbsd

void	test(const char *src, unsigned int size)
{
	char	dest_og[20];
	char	dest_mine[20];
	size_t	n_og;
	size_t	n_mine;

	n_og = strlcpy(dest_og, src, size);
	n_mine = ft_strlcpy(dest_mine, src, size);
	printf("Source : '%s'\n", src);
	printf("Copying %u characters\n", size);
	printf("strlcpy : '%s', return length %zu\n", dest_og, n_og);
	printf("ft_strlcpy : '%s', return length %zu\n\n", dest_mine, n_mine);
}

int	main(void)
{
	test("", 20);
	test("Hello world !", 20);
	test("Hello world !", 14);
	test("Hello world !", 10);
	test("Hello world !", 1);
	test("Hello world !", 0);
	return (0);
} */
