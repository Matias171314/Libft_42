/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:07:36 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/28 01:10:33 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the given character is printable.
 * @param c The character to check.
 * @return Returns 1 if the character is printable (ASCII values 32 to 126
 *         inclusive), otherwise returns 0.
 */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/* #include <stdio.h>
int	main(void)
{
	printf("31 -> %d\n", ft_isprint(31));     // Expected: 0
	printf("32 -> %d\n", ft_isprint(32));     // Expected: 1
	printf("65 -> %d\n", ft_isprint(65));     // Expected: 1
	printf("126 -> %d\n", ft_isprint(126));   // Expected: 1
	printf("127 -> %d\n", ft_isprint(127));   // Expected: 0
	return (0);
} */