/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <emmmilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:24:16 by emmmilla          #+#    #+#             */
/*   Updated: 2026/06/01 15:07:41 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Function that fills the first n bytes of the memory area pointed to by s
//with the constant byte c

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)s;
	while (n-- > 0)
		*temp++ = (unsigned char)c;
	return (s);
}

/* //Testing the function with some values
#include <stdio.h>
#include <string.h>

void	print_bytes(const void *s, int n)
{
	printf("Memory : ");
	for (int i = 0; i < n; i++)
		printf("%d ", ((unsigned char *)s)[i]);
	printf("\n");
}

void	test(char c, size_t len)
{
	char	string1[30] = "Como estan los maquinas";
	char	string2[30] = "Como estan los maquinas";

	printf("Input : \"%s\"\n", string1);
	print_bytes(string1, 30);
	printf("Settings %ld '%c'\n", len, c);
	memset(string1, c, len);
	ft_memset(string2, c, len);
	printf("memset : %s\n", string1);
	print_bytes(string1, 30);
	printf("ft_memset : %s\n", string2);
	print_bytes(string2, 30);
	printf("\n");
}

int	main(void)
{
	test('A', 0);
	test('x', 5);
	test(122, 20);
	test(69, 30);
	return (0);
} */
