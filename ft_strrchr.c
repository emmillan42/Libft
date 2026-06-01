/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <emmmilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:44:37 by emmmilla          #+#    #+#             */
/*   Updated: 2026/06/01 15:15:15 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Function that returns a pointer to the last occurrence of the character c
//in the string s.
char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			last = (char *)s;
		s++;
	}
	if ((unsigned char)*s == (unsigned char)c)
		last = (char *)s;
	return (last);
}

/* //Testing the function with some strings
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	string[] = "Hello world !";
	int			chr[9] = {'H', 'o', ' ', 'c', 'l', '!', '\0',
		'\x7f', 'H' + 256};

	printf("Source : %s\n\n", string);
	for (int i = 0; i < 9; i++)
	{
		printf("Looking for '%c'\n", chr[i]);
		printf("strchr : \t%p\t%lu\n", strrchr(string, chr[i]),
			(unsigned long)strrchr(string, chr[i]));
		printf("ft_strchr : \t%p\t%lu\n\n", ft_strrchr(string, chr[i]),
			(unsigned long)ft_strrchr(string, chr[i]));
	}
	return (0);
} */
