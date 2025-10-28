/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 19:33:19 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/28 11:50:27 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares the first n bytes of the memory areas s1 and s2.
 * @param s1 Pointer to the first memory area.
 * @param s2 Pointer to the second memory area.
 * @param n Number of bytes to compare.
 * @return An integer less than, equal to, or greater than zero if the first n
 *         bytes of s1 is found, respectively, to be less than, to match, or
 *         be greater than the first n bytes of s2.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>
int main() {
	const char *str1 = "Hello, World!";
	const char *str2 = "Hello, World?";
	size_t n = 13;
	int result_ft = ft_memcmp(str1, str2, n);
	int result_std = memcmp(str1, str2, n);
	printf("ft_memcmp result: %d\n", result_ft);
	printf("memcmp result: %d\n", result_std);
	return 0;
} */
