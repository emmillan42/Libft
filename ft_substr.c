/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:53:39 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/19 18:53:43 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start >= size)
	{
		substr = malloc(sizeof(*substr));
		if (!substr)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (len > size - start)
		len = size - start;
	substr = malloc(sizeof(*substr) * (len + 1));
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}

//Testing the Function with some strings
#include <stdio.h>

int	main(void)
{
	char	string[] = "Hello evreryone !";
	char	*sub1 = ft_substr(string, 0, 5);
	char	*sub2 = ft_substr(string, 6, 30);
	char	*sub3 = ft_substr(NULL, 5, 5);

	printf("Source : %s\n", string);
	if (!sub1)
		printf("An error occured.\n");
	else
		printf("Substring from i = %d of length len = %d\n%s\n", 0, 5, sub1);
	if (!sub2)
		printf("An error occured.\n");
	else
		printf("Substring from i = %d of length len = %d\n%s\n", 6, 30, sub2);
	if (!sub3)
		printf("An error occured.\n");
	else
		printf("Substring from i = %d of length len = %d\n%s\n", 5, 5, sub3);
	free(sub1);
	free(sub2);
	free(sub3);
}
