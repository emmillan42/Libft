/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:23:21 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/21 10:20:05 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

//Function that calculates the length of the string pointed to by s, 
//excluding the terminating null byte ('\0')
size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

/*//Testing the function with some values
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	char	*test = "Emmanuel Millan";
	int		len;
	char	*str1 = "Hello 42!";
	char	*str2 = "";

	len = ft_strlen(test);
	printf("The string lengh of '%s' is: %d\n", test, len);
	printf("Input: \"%s\"\n", str1);
	printf("strlen: %zu\n", strlen(str1));
	printf("ft_strlen: %zu\n\n", ft_strlen(str1));
	printf("Input: \"%s\"\n", str2);
	printf("strlen: %zu\n", strlen(str2));
	printf("ft_strlen: %zu\n", ft_strlen(str2));
	return (0);
}*/
