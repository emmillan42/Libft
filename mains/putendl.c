/* //Testing the function with some strings
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	char	*test_cases[] = {"Hello 42!", "Coucou 42!", "Hola 42!"};
	int		fd = open("ft_putendl_fd_test", O_CREAT | O_RDWR, 0777);

	printf("Standard input :\n");
	for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
		ft_putendl_fd(test_cases[i], STDIN_FILENO);
	printf("Standard output :\n");
	for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
		ft_putendl_fd(test_cases[i], STDOUT_FILENO);
	printf("Standard error :\n");
	for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
		ft_putendl_fd(test_cases[i], STDERR_FILENO);
	if (fd != -1)
	{
		printf("New file : check file ft_putendl_fd_test\n");
		for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
			ft_putendl_fd(test_cases[i], fd);
		close(fd);
	}
	return (0);
} */
