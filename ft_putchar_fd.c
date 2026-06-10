/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:58:29 by emmmilla          #+#    #+#             */
/*   Updated: 2026/06/10 10:00:41 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* //Testing the function with some characters
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	char	test_cases[] = {'H', 'e', 'l', 'l', 'o', ' ', '4', '2', '!', '\n'};
	int		fd = open("ft_putchar_fd_test", O_CREAT | O_RDWR, 0777);

	printf("Standard input :\n");
	for (size_t i = 0; i < sizeof(test_cases); i++)
		ft_putchar_fd(test_cases[i], STDIN_FILENO);
	printf("Standard output :\n");
	for (size_t i = 0; i < sizeof(test_cases); i++)
		ft_putchar_fd(test_cases[i], STDOUT_FILENO);
	printf("Standard error :\n");
	for (size_t i = 0; i < sizeof(test_cases); i++)
		ft_putchar_fd(test_cases[i], STDERR_FILENO);
	if (fd != -1)
	{
		printf("New file : check file ft_putchar_fd_test\n");
		for (size_t i = 0; i < sizeof(test_cases); i++)
			ft_putchar_fd(test_cases[i], fd);
		close(fd);
	}
	return (0);
} */
