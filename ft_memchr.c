/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:55:03 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/28 11:58:35 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the first occurrence of c (converted to an unsigned char)
 * 		  in string s.
 * @param s The string to be scanned.
 * @param c The character to be located.
 * @param n The number of bytes to be analyzed.
 * @return A pointer to the first occurrence of the character c in the string s,
 * 		   or NULL if the character is not found within the first n bytes.
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>
int main() {
	const char *str = "Hello, World!";
	int c = 'W';
	size_t n = 13;
	void *result_ft = ft_memchr(str, c, n);
	void *result_std = memchr(str, c, n);
	if (result_ft)
		printf("ft_memchr found: %s\n", (char *)result_ft);
	else
		printf("ft_memchr did not find the character.\n");
	if (result_std)
		printf("memchr found: %s\n", (char *)result_std);
	else
		printf("memchr did not find the character.\n");
	return 0;
} */
