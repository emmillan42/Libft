/* //Testing the function with some values
#include <stdio.h>

void	ft_del_content(void *content)
{
	printf("deleting \"%s\"\n", (char *)content);
}

int	main(void)
{
	t_list	*node;

	node = ft_lstnew("Hello");
	if (!node)
		printf("Memory allocation failed.\n");
	else
	{
		ft_lstdelone(node, &ft_del_content);
	}
	return (0);
} */
