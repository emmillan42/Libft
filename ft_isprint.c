/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:22:47 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/20 15:26:51 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Function that checks for any printable character including space
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

//Testing the function with some characters
/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("char\tprint\tisprint\tft_isprint\n");
	for (int i = 0; i <= 255; i++)
	{
		printf("%d\t", i);
		if (ft_isprint(i))
			printf("%c\t", i);
		else
			printf("-\t");
		printf("%d\t", isprint(i));
		printf("%d\n", ft_isprint(i));
	}
	return (0);
}*/
