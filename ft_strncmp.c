/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:45:03 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/29 13:34:40 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Function that compares only the first (at most) n bytes (strncmp) of s1 and s2
//Returns an integer indicating the result of the comparison, as follows:
//       • 0, if the s1 and s2 are equal;
//       • a negative value if s1 is less than s2;
//       • a positive value if s1 is greater than s2.
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*//Testing the function with some strings
#include <string.h>
#include <stdio.h>

void	test(const char *str1, const char *str2, int n)
{
	printf("%s vs %s (%d characters)\n", str1, str2, n);
	printf("strncmp : %d\n", strncmp(str1, str2, n));
	printf("ft_strncmp : %d\n\n", ft_strncmp(str1, str2, n));
}

int	main(void)
{
	test("apple", "apple", 6);
	test("apple", "apples", 5);
	test("apple", "apples", 6);
	test("apple", "42", 1);
	test("programming", "programmers", 8);
	test("programming", "programmers", 9);
	test("\200", "\0", 1);
	test("\x12\xff\x65\x12\xbd\xde\xad", "\x12\x02", 6);
	return (0);
}*/
