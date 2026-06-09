/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:58:04 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/19 18:58:07 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* //Testing the Function with some strings
#include <stdio.h>

void	roller_coaster(unsigned int i, char *c)
{
	if (i % 2)
		*c = ft_tolower(*c);
	else
		*c = ft_toupper(*c);
}

int	main(void)
{
	char	str[] = "Hello everyone. Good to see you again !";

	printf("Before ft_striteri : %s\n", str);
	ft_striteri(str, &roller_coaster);
	printf("After ft_striteri : %s\n", str);
	return (0);
} */
