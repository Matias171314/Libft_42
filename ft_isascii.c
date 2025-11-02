/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:30:02 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/01 20:56:03 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Comprueba si el carácter dado es un carácter ASCII (0-127).
 * @param c El carácter a comprobar.
 * @return Retorna 1 si el carácter es un carácter ASCII (0-127),
 *         de lo contrario retorna 0.
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
	printf("65 -> %d\n", ft_isascii(65));     // Esperado: 1
	printf("97 -> %d\n", ft_isascii(97));     // Esperado: 1
	printf("48 -> %d\n", ft_isascii(48));     // Esperado: 1
	printf("128 -> %d\n", ft_isascii(128));   // Esperado: 0
	printf("-1 -> %d\n", ft_isascii(-1));     // Esperado: 0
	printf("200 -> %d\n", ft_isascii(200));   // Esperado: 0
	return (0);
} */