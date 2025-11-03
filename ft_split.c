/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:25:21 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/03 09:28:40 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* @brief Divide una cadena de texto en un array de cadenas, utilizando un
*        delimitador.
* @param s La cadena a dividir.
* @param c El carácter delimitador.
* @return Un puntero a un array de cadenas (NULL-terminado), o NULL si la
*         asignación falla.
*/

#include "libft.h"

static char	**free_split(char **res, int j)
{
	while (j >= 0)
	{
		free(res[j]);
		j--;
	}
	free(res);
	return (NULL);
}

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*word_dup(const char *s, int start, int end)
{
	char	*word;
	int		i;

	word = malloc(end - start + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static char	**split_words(char **res, const char *s, char c)
{
	size_t	i;
	int		j;
	int		index;

	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || s[i] == '\0') && index >= 0)
		{
			res[j] = word_dup(s, index, i);
			if (!res[j])
				return (free_split(res, j - 1));
			j++;
			index = -1;
		}
		i++;
	}
	res[j] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	return (split_words(res, s, c));
}

/* #include <stdio.h>
int	main(void)
{
	char **arr = ft_split("Hello 42 Madrid", ' ');
	for (int i = 0; arr[i]; i++)
		printf("[%s]\n", arr[i]);
	// Esperado: [Hello] [42] [Madrid]
	for (int i = 0; arr[i]; i++)
		free(arr[i]);
	free(arr);
} */