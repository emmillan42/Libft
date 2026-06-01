/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:45:56 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/19 18:46:00 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Function that compares the first n bytes (each interpreted as unsigned char) 
//of the memory areas s1 and s2.
//Returns an integer  if  the first n bytes  of s1 is found, respectively, 
//to be less than, to match, or be greater than the first n bytes of s2.
//For a nonzero return value, the sign is determined by the sign of the
//difference between the first pair of bytes (interpreted as unsigned char)
//that differ in s1 and s2. If n is zero, the return value is zero.

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
		n--;
	}
	return (0);
}

/* //Testing the Function with some strings
#include <stdio.h>
#include <string.h>

void	print_bytes(const void *s, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", ((unsigned char *)s)[i]);
	}
	printf("\n");
}

void	test(const void *s1, const void *s2, size_t n)
{
	printf("Comparing memory areas :\n");
	printf("s1 = ");
	print_bytes(s1, n);
	printf("s2 = ");
	print_bytes(s2, n);
	printf("memcmp : %d\n", memcmp(s1, s2, n));
	printf("ft_memcmp : %d\n", ft_memcmp(s1, s2, n));
}

int	main(void)
{
	char	c1[] = {-128, 0, 127, 0};
	char	c2[] = {-128, 0, 127, 0};
	char	c3[] = {0, 0, 127, 0};
	char	c4[] = {0, 0, 42, 0};

	test(c1, c2, 4);
	test(c1, c3, 0);
	test(c1, c3, 1);
	test(c3, c1, 1);
	test(c3, c4, 4);
	return (0);
} */
