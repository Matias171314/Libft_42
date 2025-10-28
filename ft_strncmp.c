/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:27:51 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/28 03:10:56 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares up to n characters of the strings s1 and s2.
 * @param s1 Pointer to the first string.
 * @param s2 Pointer to the second string.
 * @param n The maximum number of characters to compare.
 * @return An integer less than, equal to, or greater than zero if s1 (or the
 *         first n bytes thereof) is found, respectively, to be less than,
 *         to match, or be greater than s2.
 */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* #include <stdio.h>
int	main(void)
{
	printf("Cmp 'Hello' & 'Hello' (5): %d\n", ft_strncmp("Hello", "Hello", 5));
	// Expected: 0
	printf("Cmp 'Hello' & 'Hellp' (5): %d\n", ft_strncmp("Hello", "Hellp", 5));
	// Expected: negative value
	printf("Cmp 'Hello' & 'Hell' (5): %d\n", ft_strncmp("Hello", "Hell", 5));
	// Expected: positive value
	printf("Cmp 'Apple' & 'ApPle' (5): %d\n", ft_strncmp("Apple", "ApPle", 5));
	// Expected: positive value
	printf("Cmp 'Test' & 'Test' (0): %d\n", ft_strncmp("Test", "Test", 0));
	// Expected: 0
	return (0);
} */