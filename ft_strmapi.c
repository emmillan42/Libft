/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <emmmilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:57:16 by emmmilla          #+#    #+#             */
/*   Updated: 2026/06/09 21:32:23 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!s || !f)
		return (NULL);
	str = malloc((ft_strlen(s) + 1) * sizeof(*str));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f((unsigned int)i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* //Testing the Function with some strings
#include <stdio.h>

char	roller_coaster(unsigned int i, char c)
{
	if (i % 2)
		return (ft_tolower(c));
	else
		return (ft_toupper(c));
}

int	main(void)
{
	char	str[] = "Hello everyone. Good to see you again !";
	char	*cpy;

	printf("Source : %s\n", str);
	cpy = ft_strmapi(str, &roller_coaster);
	if (!cpy)
		printf("An error occured.\n");
	else
		printf("Modified copy : %s\n", cpy);
	free(cpy);
	return (0);
} */
