/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:20:06 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/20 14:55:38 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Function that checks for a digit (0 through 9)
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/* //Testing the function with some characters
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("char\tprint\tisdigit\tft_isdigit\n");
	for (int i = 0; i <= 255; i++)
	{
		printf("%d\t", i);
		if (ft_isprint(i))
			printf("%c\t", i);
		else
			printf("-\t");
		printf("%d\t", isdigit(i));
		printf("%d\n", ft_isdigit(i));
	}
	return (0);
} */
