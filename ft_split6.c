/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split6.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <emmmilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:56:23 by emmmilla          #+#    #+#             */
/*   Updated: 2026/06/09 11:16:15 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordlen(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			s += ft_wordlen(s, c);
			count++;
		}
		else
			s++;
	}
	return (count);
}

static char	*ft_word_dup_len(const char *s, size_t len)
{
	char	*word;

	word = malloc((len + 1) * sizeof(*word));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, len + 1);
	return (word);
}

static void	*ft_clean(char **split, size_t used)
{
	size_t	i;

	i = 0;
	while (i < used)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

static char	**ft_fill_array(char **split, const char *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			len = ft_wordlen(s, c);
			split[i] = ft_word_dup_len(s, len);
			if (!split[i])
				return (ft_clean(split, i));
			s += len;
			i++;
		}
	}
	split[i] = NULL;
	return (split);
}

// Function that reserves memory (using malloc) and returns an array of strings
// obtained by dividing the string 's' into substrings using the character 'c'
// as delimiter. Each string in the returned array is reserved independently.
// The pointer array is also reserved dynamically. The returned array must end
// with a pointer to NULL.
// Returns: The resulting array of new strings from the division. NULL if any
// memory allocation fails.
// The returned structure must be freed using:
// 1) free() on each string in the array.
// 2) free() on the array.
char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	split = malloc((word_count + 1) * sizeof(*split));
	if (!split)
		return (NULL);
	return (ft_fill_array(split, s, c));
}

char	**ft_split_full(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	len;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	split = malloc((word_count + 1) * sizeof(*split));
	if (!split)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			len = ft_wordlen(s, c);
			split[i] = ft_word_dup_len(s, len);
			if (!split[i])
				return (ft_clean(split, i));
			s += len;
			i++;
		}
	}
	split[i] = NULL;
	return (split);
}
