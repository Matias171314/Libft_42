/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:28:36 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/28 01:28:23 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts a lowercase letter to its uppercase equivalent.
 * @param c The character to convert.
 * @return The uppercase equivalent if c is a lowercase letter,
 *         otherwise returns c unchanged.
 */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/* #include <stdio.h>
int	main(void)
{
	printf("'a' -> '%c'\n", ft_toupper('a'));   // Expected: 'A'
	printf("'z' -> '%c'\n", ft_toupper('z'));   // Expected: 'Z'
	printf("'m' -> '%c'\n", ft_toupper('m'));   // Expected: 'M'
	printf("'A' -> '%c'\n", ft_toupper('A'));   // Expected: 'A'
	printf("'Z' -> '%c'\n", ft_toupper('Z'));   // Expected: 'Z'
	printf("'M' -> '%c'\n", ft_toupper('M'));   // Expected: 'M'
	printf("'1' -> '%c'\n", ft_toupper('1'));   // Expected: '1'
	printf("'!' -> '%c'\n", ft_toupper('!'));   // Expected: '!'
	return (0);
} */