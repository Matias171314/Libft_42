/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 02:19:20 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/28 01:09:39 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the given character is alphanumeric.
 * @param c The character to check.
 * @return Returns 1 if the character is alphanumeric (A-Z, a-z,
 *         or 0-9), otherwise returns 0.
 */

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/* #include <stdio.h>
int	main(void)
{
	printf("'A' -> %d\n", ft_isalnum('A'));   // Expected: 1
	printf("'z' -> %d\n", ft_isalnum('z'));   // Expected: 1
	printf("'5' -> %d\n", ft_isalnum('5'));   // Expected: 1
	printf("'#' -> %d\n", ft_isalnum('#'));   // Expected: 0
	printf("' ' -> %d\n", ft_isalnum(' '));   // Expected: 0
	return (0);
} */