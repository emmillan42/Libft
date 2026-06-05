/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <emmmilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:54:36 by emmmilla          #+#    #+#             */
/*   Updated: 2026/06/05 08:44:09 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	size;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size = ft_strlen(s1);
	while (size > 0 && ft_strchr(set, s1[size - 1]))
		size--;
	result = malloc(sizeof(*result) * (size + 1));
	if (!result)
		return (NULL);
	ft_memcpy(result, s1, size);
	result[size] = '\0';
	return (result);
}

/* //Testing the Function with some strings
#include <stdio.h>

int	main(void)
{
	char	string[] = " abc\nHello\t42! \tbbc \n";
	char	set[] = " abc\n\t";

	char	*trimmed = ft_strtrim(string, set);
	if (!trimmed)
		printf("An error occured.\n");
	else
		printf("Trimmed string : %s\n", trimmed);
	free(trimmed);
	return (0);
} */
