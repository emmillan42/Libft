/* //Testing the function with some values
#include <string.h>
#include <stdio.h>

void	test(size_t len)
{
	char	string1[20] = "Hello world !";
	char	string2[20] = "Hello world !";
	char	string3[20] = "friend";
	char	string4[20] = "Hello world !";
	char	string5[20] = "Hello world !";
	char	string6[20] = "Hello mundo !";
	void	*nullptr = NULL;

	printf("Destination string : \"%s\"\n", string1);
	printf("Copying \"%s\" to 6th char (n = %ld)\n", string3, len);
	memcpy(string1 + 6, string3, len);
	ft_memcpy(string2 + 6, string3, len);
	printf("memcpy : %s\n", string1);
	printf("ft_memcpy : %s\n", string2);
	printf("Copying \"%s\" to 6th char (n = %ld)\n", string6, len);
	memcpy(string4 + 6, string6, len);
	ft_memcpy(string5 + 6, string6, len);
	printf("memcpy : %s\n", string4);
	printf("ft_memcpy : %s\n", string5);
	if (len > 6)
		printf("Memory areas overlap ! Use memmove instead.\n");
	if (len == 0)
	{
		printf("Destination string is NULL\n"); // CRASH when len > 0
		memcpy(nullptr, string3, len);
		ft_memcpy(nullptr, string3, len);
		printf("Does nothing.\n");
		printf("Source string is NULL\n"); // CRASH when len > 0
		memcpy(string3, nullptr, len);
		ft_memcpy(string3, nullptr, len);
		printf("Does nothing.\n");
	}
	printf("\n");
#if !defined(__APPLE__) && !defined(__aarch64__)
	if (len == 0)
#endif
	{
		printf("Destination and source strings are both NULL\n");
		// NO CRASH on macOS and ARM, CRASH on x86 when len > 0
		memcpy(nullptr, nullptr, len);
		ft_memcpy(nullptr, nullptr, len);
		printf("Does nothing.\n");
	}
}

int	main(void)
{
	test(0);
	printf("\n");
	test(3);
	printf("\n");
	test(6);
	printf("\n");
	test(10);
	return (0);
} */
