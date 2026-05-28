/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:41:29 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/28 14:12:13 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Function that copies strings. It is designed to be safer, more consistent, 
//and less error prone replacement for strncpy. Copies up to size - 1 characters
//from the NUL-terminated string src to dst, NUL-terminating the result.
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/* //Testing the function with some strings
#include <stdio.h>
#include <string.h>
#include <bsd/string.h> // on Linux compile with flag -lbsd

void	test(const char *src, unsigned int size)
{
	char	dest_og[20];
	char	dest_mine[20];
	size_t	n_og;
	size_t	n_mine;

	n_og = strlcpy(dest_og, src, size);
	n_mine = ft_strlcpy(dest_mine, src, size);
	printf("Source : '%s'\n", src);
	printf("Copying %u characters\n", size);
	printf("strlcpy : '%s', return length %zu\n", dest_og, n_og);
	printf("ft_strlcpy : '%s', return length %zu\n\n", dest_mine, n_mine);
}

int	main(void)
{
	test("", 20);
	test("Hello world !", 20);
	test("Hello world !", 14);
	test("Hello world !", 10);
	test("Hello world !", 1);
	test("Hello world !", 0);
	return (0);
} */
