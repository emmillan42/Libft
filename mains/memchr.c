/* //Testing the function with some values
#include <stdio.h>
#include <string.h>

void	print_bytes(const void *s, int n, void *found)
{
	for (int i = 0; i < n; i++)
	{
		if (found && &((unsigned char *)s)[i] == found)
			printf("(%d) ", ((unsigned char *)s)[i]);
		else
			printf("%d ", ((unsigned char *)s)[i]);
	}
	printf("\n");
}

void	test(const void *s, int c, size_t n)
{
	void	*result_og;
	void	*result_mine;

	printf("Looking for %d ≡ %d [256] in memory area : ", c, c % 256);
	print_bytes(s, n, NULL);
	result_og = memchr(s, c, n);
	result_mine = ft_memchr(s, c, n);
	if (!result_og)
		printf("memchr : couldn't find.\n");
	else
	{
		printf("memchr : ");
		print_bytes(s, n, result_og);
	}
	if (!result_mine)
		printf("ft_memchr : couldn't find.\n");
	else
	{
		printf("ft_memchr : ");
		print_bytes(s, n, result_mine);
	}
}

int	main(void)
{
	char	c[] = {0, 1, 2, 3, 4, 5};
	char	s[] = "Coucou les cocos";

	printf("Input : %s\n", s);
	print_bytes(s, ft_strlen(s), NULL);
	test(s, 'C', 0);
	test(s, 'C', 1);
	test(s, 'u', 3);
	test(s, 'x', 16);
	test(s, 'u' + 256, 3);
	printf("\n");
	printf("Input : %s\n", c);
	print_bytes(c, ft_strlen(c), NULL);
	test(c, 0, 0);
	test(c, 0, 1);
	test(c, 2, 3);
	test(c, 6, 16);
	test(c, 2 + 256, 3);
	return (0);
} */
