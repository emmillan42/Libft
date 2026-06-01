/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evmillan <evmillan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:48:10 by emmmilla          #+#    #+#             */
/*   Updated: 2026/06/01 11:07:18 by evmillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_isspace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_issign(char c)
{
	return ((c == '+') - (c == '-'));
}

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

//Function that converts the initial portion of the string pointed to by nptr
//to int. Returns the converted value or 0 on error.
//The  string  may begin with an arbitrary amount of white space (as determined
//by isspace(3)) followed by a single optional '+' or '-' sign. The remainder of
//the string is converted to a long value in the obvious manner, stopping at the
//first  character which is not a valid digit.
int	ft_atoi(const char *nptr)
{
	const char	*p;
	long		nb;
	int			sign;

	p = nptr;
	sign = 1;
	nb = 0;
	while (ft_isspace(*p))
		p++;
	if (ft_issign(*p))
	{
		sign = ft_issign(*p);
		p++;
	}
	while (ft_isdigit(*p))
	{
		nb *= 10;
		nb += *p - '0';
		p++;
	}
	return ((int)(sign * nb));
}

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
