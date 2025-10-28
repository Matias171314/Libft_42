/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:09:05 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/28 03:26:10 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Duplicates the given string by allocating memory and copying the
 *        content.
 * @param s1 The string to duplicate.
 * @return A pointer to the newly allocated duplicate string, or NULL if
 *         allocation fails.
*/

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	copy = (char *)malloc(len + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/* #include <stdio.h>
int	main(void)
{
	const char *original = "Hello, World!";
	char *duplicate = ft_strdup(original);
	if (duplicate)
	{
		printf("Original: %s\n", original);
		printf("Duplicate: %s\n", duplicate);
		free(duplicate);
	}
	else
	{
		printf("Memory allocation failed\n");
	}
	return (0);
} */