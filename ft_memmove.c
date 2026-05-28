/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:40:49 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/21 15:13:33 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>

//Function that copies n bytes from memory area src to memory area dst.
//The memory areas may overlap: copying takes place as the bytes in src are
//first copied into a temporary array that does not overlap src or dst,
//and the bytes are then copied from the temporary array to dst.
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*pdst;
	const unsigned char	*psrc;

	if (!dst && !src && n > 0)
		return (NULL);
	pdst = (unsigned char *)dst;
	psrc = (const unsigned char *)src;
	if (pdst > psrc)
	{
		while (n-- > 0)
			pdst[n] = psrc[n];
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}

/* //Testing the function with some values
#include <string.h>
#include <stdio.h>

void	test(size_t len)
{
	char	string1[20] = "Hello world !";
	char	string2[20] = "Hello world !";
	char	string3[20] = "friend";
	char	string4[20] = "Hello world !";
	char	string5[20] = "Hello world !";
	char	string6[20] = "Hello world !";
	char	string7[20] = "Hello world !";
	void	*nullptr = NULL;

	printf("Destination string : \"%s\"\n", string1);
	printf("Copying \"%s\" to 6th char (n = %ld)\n", string3, len);
	memmove(string1 + 6, string3, len);
	ft_memmove(string2 + 6, string3, len);
	printf("memmove : %s\n", string1);
	printf("ft_memmove : %s\n", string2);
	printf("Copying \"%s\" to 6th char (n = %ld)\n", string4, len);
	memmove(string4 + 6, string4, len);
	ft_memmove(string5 + 6, string5, len);
	printf("memmove : %s\n", string4);
	printf("ft_memmove : %s\n", string5);
	printf("Copying \"%s\" from 6th char (n = %ld)\n", string6, len);
	memmove(string6, string6 + 6, len);
	ft_memmove(string7, string7 + 6, len);
	printf("memmove : %s\n", string6);
	printf("ft_memmove : %s\n", string7);
	if (len == 0)
	{
		printf("Destination string is NULL\n"); // CRASH when len > 0
		memmove(nullptr, string3, len);
		ft_memmove(nullptr, string3, len);
		printf("Does nothing.\n");
		printf("Source string is NULL\n"); // CRASH when len > 0
		memmove(string3, nullptr, len);
		ft_memmove(string3, nullptr, len);
		printf("Does nothing.\n");
	}
#if !defined(__APPLE__) && !defined(__aarch64__)
	if (len == 0)
#endif
	{
		printf("Destination and source strings are both NULL\n");
		// NO CRASH on macOS and ARM, CRASH on x86 when len > 0
		memmove(nullptr, nullptr, len);
		ft_memmove(nullptr, nullptr, len);
		printf("Does nothing.\n");
	}
}

int	main(void)
{
	test(0);
	printf("\n");
	test(3);
	printf("\n");
	test(6);
	printf("\n");
	test(10);
	return (0);
} */
