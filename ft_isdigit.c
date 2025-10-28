/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 00:53:05 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/28 01:10:24 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the given character is a digit.
 * @param c The character to check.
 * @return Returns 1 if the character is a digit (0-9),
 *         otherwise returns 0.
 */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	printf("'0' -> %d\n", ft_isdigit('0'));   // Expected: 1
	printf("'5' -> %d\n", ft_isdigit('5'));   // Expected: 1
	printf("'9' -> %d\n", ft_isdigit('9'));   // Expected: 1
	printf("'a' -> %d\n", ft_isdigit('a'));   // Expected: 0
	printf("'Z' -> %d\n", ft_isdigit('Z'));   // Expected: 0
	printf("' ' -> %d\n", ft_isdigit(' '));   // Expected: 0
	printf("'-' -> %d\n", ft_isdigit('-'));   // Expected: 0
	return (0);
} */