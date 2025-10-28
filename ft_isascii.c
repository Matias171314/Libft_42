/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:30:02 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/28 01:10:11 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the given character is an ASCII character.
 * @param c The character to check.
 * @return Returns 1 if the character is an ASCII character (0-127),
 *         otherwise returns 0.
 */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* #include <stdio.h>
int	main(void)
{
	printf("65 -> %d\n", ft_isascii(65));     // Expected: 1
	printf("97 -> %d\n", ft_isascii(97));     // Expected: 1
	printf("48 -> %d\n", ft_isascii(48));     // Expected: 1
	printf("128 -> %d\n", ft_isascii(128));   // Expected: 0
	printf("-1 -> %d\n", ft_isascii(-1));     // Expected: 0
	printf("200 -> %d\n", ft_isascii(200));   // Expected: 0
	return (0);
} */