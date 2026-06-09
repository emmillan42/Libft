/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <emmmilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:54:10 by emmmilla          #+#    #+#             */
/*   Updated: 2026/06/09 11:21:04 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Allocates memory (with malloc) and returns a new string of characters, formed
//by the concatenation of 's1' and 's2' or NULL if memory allocation fails.
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = malloc(sizeof(*str) * (len1 + len2 + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, len1);
	ft_memcpy(str + len1, s2, len2);
	str[len1 + len2] = '\0';
	return (str);
}

/* //Testing the Function with some strings
#include <stdio.h>

int	main(void)
{
	char	s1[] = "Hello";
	char	s2[] = " ";
	char	s3[] = "42!";

	printf("Initial string : \"%s\"\n", s1);
	char	*joined1 = ft_strjoin(s1, s2);
	if (!joined1)
		printf("Memory allocation failed.\n");
	else
		printf("Joined string : \"%s\"\n", joined1);
	char	*joined2 = ft_strjoin(joined1, s3);
	if (!joined2)
		printf("Memory allocation failed.\n");
	else
		printf("Joined string : \"%s\"\n", joined2);
	free(joined1);
	free(joined2);
	return (0);
} */
