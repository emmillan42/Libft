/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:24:45 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/21 12:57:21 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>

//Function that erases the data in the n bytes of the memory starting at the
//location pointed to by s, by writing zeros (bytes = '\0') to that area
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*//Testing the function with some values
#include <stdio.h>
#include <string.h>

void	print_bytes(const void *s, int n)
{
	printf("Memory : ");
	for (int i = 0; i < n; i++)
		printf("%d ", ((unsigned char *)s)[i]);
	printf("\n");
}

void	test(size_t len)
{
	char	string1[30] = "Como estan los maquinas";
	char	string2[30] = "Como estan los maquinas";

	printf("Input : \"%s\"\n", string1);
	print_bytes(string1, 30);
	printf("Setting %ld zeros\n", len);
	bzero(string1, len);
	ft_bzero(string2, len);
	printf("bzero : %s\n", string1);
	print_bytes(string1, 30);
	printf("ft_bzero : %s\n", string2);
	print_bytes(string2, 30);
	printf("\n");
}

int	main(void)
{
	test(0);
	test(5);
	test(20);
	test(30);
	return (0);
}*/
