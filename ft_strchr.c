/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <emmmilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:43:38 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/29 11:28:16 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Function that returns a pointer to the first occurrence of the character c 
//in the string s.
char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}

/*//Testing the function with some characters
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	string[] = "Hello world !";
	int			chr[9] = {'H', 'o', ' ', 'w', 'c', '!', '\0',
		'\x7f', 'H' + 256};

	printf("Source : %s\n\n", string);
	for (int i = 0; i < 9; i++)
	{
		printf("Looking for '%c'\n", chr[i]);
		printf("strchr : \t%p\t%lu\n", strchr(string, chr[i]),
			(unsigned long)strchr(string, chr[i]));
		printf("ft_strchr : \t%p\t%lu\n\n", ft_strchr(string, chr[i]),
			(unsigned long)ft_strchr(string, chr[i]));
	}
	return (0);
}*/
