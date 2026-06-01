/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:42:52 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/28 16:22:29 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//If  c  is a uppercase letter, tolower() returns its lowercase equivalent,
//if an lowercase exists in the current locale.  Otherwise, it returns c.
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/* //Testing the function with some characters
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("char\tprint\ttolower\tft_tolower\n");
	for (int i = 0; i <= 255; i++)
	{
		printf("%d\t", i);
		if (i >= 32 && i <= 126)
			printf("%c\t", i);
		else
			printf("-\t");
		printf("%d\t", tolower(i));
		printf("%d\n", ft_tolower(i));
	}
	return (0);
} */
