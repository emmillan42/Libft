/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <emmmilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:56:51 by emmmilla          #+#    #+#             */
/*   Updated: 2026/06/09 18:38:36 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(int n)
{
	long	nbr;
	int		len;

	nbr = n;
	len = 0;
	if (nbr <= 0)
	{
		nbr *= -1;
		len++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

//Allocate memory (using malloc) and return a string with the value of the int n
//received or NULL if allocation fails. It must to manage negative numbers
char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nb;

	i = ft_nbrlen(n);
	nb = n;
	str = malloc((i + 1) * sizeof(*str));
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-';
	}
	while (i > (n < 0))
	{
		i--;
		str[i] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

/* //Testing the Function with some numbers
#include <stdio.h>

int	main(void)
{
	char	*str;
	int		integers[5] = {12345, -98765, 0, -2147483648, 2147483647};

	for (int i = 0; i < 5; i++)
	{
		printf("Input : %d\n", integers[i]);
		str = ft_itoa(integers[i]);
		if (!str)
			printf("Memory allocation failed.\n\n");
		else
		{
			printf("itoa : %s\n\n", str);
			free(str);
		}
	}
	return (0);
} */
