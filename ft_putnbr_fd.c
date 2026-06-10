/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 19:00:42 by emmmilla          #+#    #+#             */
/*   Updated: 2026/06/10 12:01:34 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr *= -1;
	}
	if (nbr > 9)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((nbr % 10) + '0', fd);
}

/* //Testing the function with some numbers
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int	test_cases[] = {123, -456, 0, 2147483647, -2147483648};
	int	fd = open("ft_putnbr_fd_test", O_CREAT | O_RDWR, 0777);

	printf("Expected output :\n");
	for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
		printf("%d\n", test_cases[i]);
	printf("Standard input :\n");
	for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
	{
		ft_putnbr_fd(test_cases[i], STDIN_FILENO);
		ft_putchar_fd('\n', STDIN_FILENO);
	}
	printf("Standard output :\n");
	for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
	{
		ft_putnbr_fd(test_cases[i], STDOUT_FILENO);
		ft_putchar_fd('\n', STDOUT_FILENO);
	}
	printf("Standard error :\n");
	for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
	{
		ft_putnbr_fd(test_cases[i], STDERR_FILENO);
		ft_putchar_fd('\n', STDERR_FILENO);
	}
	if (fd != -1)
	{
		printf("New file : check file ft_putnbr_fd_test\n");
		for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
		{
			ft_putnbr_fd(test_cases[i], fd);
			ft_putchar_fd('\n', fd);
		}
		close(fd);
	}
	return (0);
} */
