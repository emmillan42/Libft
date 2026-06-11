/* //Testing the Function with some values
#include <stdio.h>

int	main(void)
{
	int		data1 = 42;
	char	*data2 = "Hello";
	char	data3 = 'E';
	t_list	*elem1 = ft_lstnew(&data1);
	t_list	*elem2 = ft_lstnew(data2);
	t_list	*elem3 = ft_lstnew(&data3);
	t_list	*current;

	if (!elem1)
		printf("Memory allocation failed.\n");
	else
	{
		printf("First node content : %d\n", *(int *)elem1->content);
		printf("next = %p\n", (void *)elem1->next);
		if (elem1->next)
			printf("Member next is not NULL.\n");
	}
	if (!elem2)
		printf("Memory allocation failed.\n");
	else
	{
		printf("Second node content : %s\n", (char *)elem2->content);
		printf("next = %p\n", (void *)elem2->next);
		if (elem2->next)
			printf("Member next is not NULL.\n");
	}
	if (!elem3)
		printf("Memory allocation failed.\n");
	else
	{
		printf("Third node content : %c\n", *(char *)elem3->content);
		printf("next = %p\n", (void *)elem3->next);
		if (elem3->next)
			printf("Member next is not NULL.\n");
	}

	elem1->next = elem2;
	elem2->next = elem3;
	current = elem1;
	while (current)
	{
		printf("%p\n", current->content);
		current = current->next;
	}

	free(elem1);
	free(elem2);
	free(elem3);
	return (0);
} */
