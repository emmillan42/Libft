/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:46:43 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/19 18:47:01 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Function that locates the first occurrence of the null-terminated string
//little in the string big, where not more than len characters are searched.
//Characters that appear after a `\0' character are not searched.
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (i + j < len && big[i + j] && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

/* //Testing the Function with some strings
#include <string.h>
#include <stdio.h>
#include <bsd/string.h> // on Linux compile with flag -lbsd

int	main(void)
{
	char	haystack[] = "Hello brothers, hello sisters";
	char	*needles[] = {"", "Hell", "Help", "bro", NULL};
	size_t	n_idx = 0;
	size_t	len;
	char	*result;

	while (needles[n_idx])
	{
		len = 0;
		printf("Haystack: \"%s\" Needle: \"%s\"\n", haystack, needles[n_idx]);
		while (len <= 10)
		{
			result = strnstr(haystack, needles[n_idx], len);
			printf("strnstr\t\t%ld\t%s\n", len, result);
			result = ft_strnstr(haystack, needles[n_idx], len);
			printf("ft_strnstr\t%ld\t%s\n", len, result);
			len++;
		}
		printf("\n");
		n_idx++;
	}
	return (0);
} */
