/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:42:25 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/28 16:09:56 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//If  c  is  a lowercase letter, toupper() returns its uppercase equivalent, 
//if an uppercase exists in the current locale.  Otherwise, it returns c.
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c -32);
	else
		return (c);
}

/* //Testing the function with some characters
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("char\tprint\ttoupper\tft_toupper\n");
	for (int i = 0; i <= 255; i++)
	{
		printf("%d\t", i);
		if (i >= 32 && i <= 126)
			printf("%c\t", i);
		else
			printf("-\t");
		printf("%d\t", toupper(i));
		printf("%d\n", ft_toupper(i));
	}
	return (0);
} */
