/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <emmmilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:52:58 by emmmilla          #+#    #+#             */
/*   Updated: 2026/06/09 11:18:34 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Function that returns a pointer to a new string duplicate of the string s.
//Return: A pointer to the duplicated string or NULL if wasn't sufficient memory
char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	size;

	size = ft_strlen(s) + 1;
	dup = malloc(size * sizeof(*dup));
	if (!dup)
		return (NULL);
	ft_strlcpy (dup, s, size);
	return (dup);
}

/* //Testing the Function with some strings
#include <stdio.h>
#include <string.h>

static void test_strdup(const char *s)
{
    char    *og;
    char    *mine;

    og = strdup(s);
    mine = ft_strdup(s);

    printf("=====================================\n");
    printf("Input : \"%s\"\n", s);

    if (!og || !mine)
    {
        printf("strdup    : %p\n", (void *)og);
        printf("ft_strdup : %p\n", (void *)mine);
    }
    else
    {
        printf("strdup    : \"%s\"\n", og);
        printf("ft_strdup : \"%s\"\n", mine);

        printf("strcmp    : %d\n", strcmp(og, mine));

        printf("strdup address    : %p\n", (void *)og);
        printf("ft_strdup address : %p\n", (void *)mine);

        if (og != mine)
            printf("✓ Different addresses\n");
        else
            printf("✗ Same address\n");
    }

    free(og);
    free(mine);
}

int main(void)
{
    test_strdup("");
    test_strdup("a");
    test_strdup("Hello");
    test_strdup("Hello world !");
    test_strdup("42 Madrid");

    return (0);
} */
