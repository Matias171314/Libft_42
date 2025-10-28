/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 00:12:24 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/28 01:10:41 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Calculates the length of a string.
 * @param s The string whose length is to be calculated.
 * @return The length of the string.
 */

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/* #include <stdio.h>

int	main(void)
{
	printf("\"Hello\" -> %zu\n", ft_strlen("Hello"));          // Expected: 5
	printf("\"\" (empty) -> %zu\n", ft_strlen(""));            // Expected: 0
	printf("\"42 Madrid\" -> %zu\n", ft_strlen("42 Madrid"));  // Expected: 9
	printf("\"A\\0BCD\" -> %zu\n", ft_strlen("A\0BCD"));       // Expected: 1
	return (0);
} */