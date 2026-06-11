/* //Testing the Function with some strings
#include <string.h>
#include <stdio.h>
#include <bsd/string.h> // on Linux compile with flag -lbsd

int	main(void)
{
	char	haystack[] = "Hello brothers, hello sisters";
	char	*needles[] = {"", "Hell", "Help", "bro", NULL};
	size_t	n_idx = 0;
	size_t	len;
	char	*result;

	while (needles[n_idx])
	{
		len = 0;
		printf("Haystack: \"%s\" Needle: \"%s\"\n", haystack, needles[n_idx]);
		while (len <= 10)
		{
			result = strnstr(haystack, needles[n_idx], len);
			printf("strnstr\t\t%ld\t%s\n", len, result);
			result = ft_strnstr(haystack, needles[n_idx], len);
			printf("ft_strnstr\t%ld\t%s\n", len, result);
			len++;
		}
		printf("\n");
		n_idx++;
	}
	return (0);
} */
