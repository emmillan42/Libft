/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:49:49 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/19 18:49:54 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

//Function that allocates memory for an array of nmemb elements of size bytes
//each and returns a pointer to the allocated memory. The memory is set to zero.
//If nmemb or size is 0, then calloc() returns a unique pointer value that can
//later be successfully passed to free().
//If the multiplication of nmemb and size would result in integer overflow,
//then calloc()  returns  an  error.
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb && size > SIZE_MAX / nmemb)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/* //Testing the function with some numbers
#include <stdio.h>
#include <limits.h>

void	test(size_t count, size_t size)
{
	void		*lib;
	void		*mine;

	lib = calloc(count, size);
	mine = ft_calloc(count, size);
	printf("Inputs : count = %lu, size = %lu\n", count, size);
	if (!lib)
		printf("calloc :\t NULL\n");
	else
	{
		printf("calloc :\t %p\n", lib);
		free(lib);
	}
	if (!mine)
		printf("ft_calloc :\t NULL\n");
	else
	{
		printf("ft_calloc :\t %p\n", mine);
		free(mine);
	}
}

int	main(void)
{
	test(2, 2);
	test(SIZE_MAX, SIZE_MAX);
	test(INT_MAX, INT_MAX);
	test(INT_MIN, INT_MIN);
	test(0, 0);
	test(0, 5);
	test(5, 0);
	test(-5, -5);
	test(0, -5);
	test(-5, 0);
	test(3, -5);
	test(-5, 3);
	test(8, 4);
	return (0);
} */
