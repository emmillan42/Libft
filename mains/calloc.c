/* //Testing the function with some numbers
#include <stdio.h>
#include <limits.h>

void	test(size_t count, size_t size)
{
	void		*lib;
	void		*mine;

	lib = calloc(count, size);
	mine = ft_calloc(count, size);
	printf("Inputs : count = %lu, size = %lu\n", count, size);
	if (!lib)
		printf("calloc :\t NULL\n");
	else
	{
		printf("calloc :\t %p\n", lib);
		free(lib);
	}
	if (!mine)
		printf("ft_calloc :\t NULL\n");
	else
	{
		printf("ft_calloc :\t %p\n", mine);
		free(mine);
	}
}

int	main(void)
{
	test(2, 2);
	test(SIZE_MAX, SIZE_MAX);
	test(INT_MAX, INT_MAX);
	test(INT_MIN, INT_MIN);
	test(0, 0);
	test(0, 5);
	test(5, 0);
	test(-5, -5);
	test(0, -5);
	test(-5, 0);
	test(3, -5);
	test(-5, 3);
	test(8, 4);
	return (0);
} */
