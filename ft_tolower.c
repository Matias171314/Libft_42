/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:33:21 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/28 01:23:11 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts an uppercase letter to its lowercase equivalent.
 * @param c The character to convert.
 * @return The lowercase equivalent if c is an uppercase letter,
 *         otherwise returns c unchanged.
 */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/* #include <stdio.h>
int	main(void)
{
	printf("'A' -> '%c'\n", ft_tolower('A'));   // Expected: 'a'
	printf("'Z' -> '%c'\n", ft_tolower('Z'));   // Expected: 'z'
	printf("'M' -> '%c'\n", ft_tolower('M'));   // Expected: 'm'
	printf("'a' -> '%c'\n", ft_tolower('a'));   // Expected: 'a'
	printf("'z' -> '%c'\n", ft_tolower('z'));   // Expected: 'z'
	printf("'m' -> '%c'\n", ft_tolower('m'));   // Expected: 'm'
	printf("'1' -> '%c'\n", ft_tolower('1'));   // Expected: '1'
	printf("'!' -> '%c'\n", ft_tolower('!'));   // Expected: '!'
	return (0);
} */