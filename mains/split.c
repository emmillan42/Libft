/* //Testing the Function with some strings
#include <stdio.h>

int	main(void)
{
	char	string[] = "Coucou les cocos";
	char	**strs = ft_split(string, 'o');

	if (!strs)
		printf("An error occured.\n");
	else
	{
		int	idx = 0;
		while (strs[idx])
		{
			printf("%s\n", strs[idx]);
			idx++;
		}
		ft_clean(strs, idx);
	}
	return (0);
} */
