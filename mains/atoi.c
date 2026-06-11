/* //Testing the Function with some values
#include <stdio.h>

int	main(void)
{
	const char	*test_cases[] = {
		"12345",
		"-54321",
		"  6789",
		"+9876",
		"0",
		"-0",
		"2147483647",
		"-2147483648",
		"2147483648",
		"  123abc",
		"abc123",
		"123abc456",
		"+-42",
		"",
		"   ",
		NULL
	};
	const char	**test = test_cases;

	while (*test)
	{
		printf("Input: \"%s\"\n", *test);
		printf("atoi: %d\n", atoi(*test));
		printf("ft_atoi: %d\n\n", ft_atoi(*test));
		test++;
	}
	return (0);
} */
