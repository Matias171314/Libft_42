/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 00:12:36 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/28 01:09:55 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the given character is an alphabetic letter.
 * @param c The character to check.
 * @return Returns 1 if the character is an alphabetic letter (A-Z or a-z),
 *         otherwise returns 0.
 */

int	ft_isalpha(int c)
{
	if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
		return (1);
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	printf("'A' -> %d\n", ft_isalpha('A'));   // Expected: 1
	printf("'z' -> %d\n", ft_isalpha('z'));   // Expected: 1
	printf("'M' -> %d\n", ft_isalpha('M'));   // Expected: 1
	printf("'5' -> %d\n", ft_isalpha('5'));   // Expected: 0
	printf("'#' -> %d\n", ft_isalpha('#'));   // Expected: 0
	printf("' ' -> %d\n", ft_isalpha(' '));   // Expected: 0
	return (0);
} */