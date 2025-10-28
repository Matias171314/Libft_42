/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:25:21 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/28 18:25:21 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Incomplete function prototype

/**
 * @brief Counts the number of words in a string separated by a given delimiter.
 * @param s The input string.
 * @param c The delimiter character.
 * @return The number of words found in the string.
 */

static int	wordcount(const char *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s || !(result = (char **)malloc(sizeof(char *) * (wordcount(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			k = i;
			while (s[k] && s[k] != c)
				k++;
			result[j++] = ft_substr(s, i, k - i);
			i = k;
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}

// Helper function to count words
int wordcount(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

void	free_split(char **split)
{
	size_t	i;

	if (!split)
		return ;
	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}


