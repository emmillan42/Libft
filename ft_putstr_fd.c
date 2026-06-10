/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:59:05 by emmmilla          #+#    #+#             */
/*   Updated: 2026/06/10 10:37:59 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

/* //Testing the function with some strings
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	char	*test_cases[] = {"Hello 42!\n", "Coucou 42!\n", "Hola 42!\n"};
	int		fd = open("ft_putstr_fd_test", O_CREAT | O_RDWR, 0777);

	printf("Standard input :\n");
	for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
		ft_putstr_fd(test_cases[i], STDIN_FILENO);
	printf("Standard output :\n");
	for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
		ft_putstr_fd(test_cases[i], STDOUT_FILENO);
	printf("Standard error :\n");
	for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
		ft_putstr_fd(test_cases[i], STDERR_FILENO);
	if (fd != -1)
	{
		printf("New file : check file ft_putstr_fd_test\n");
		for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
			ft_putstr_fd(test_cases[i], fd);
		close(fd);
	}
	return (0);
} */
