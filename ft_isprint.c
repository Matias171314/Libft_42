/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:07:36 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/01 20:56:25 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Comprueba si el carácter dado es imprimible (valores ASCII del 32 al
 *        126 inclusive).
 * @param c El carácter a comprobar.
 * @return Retorna 1 si el carácter es imprimible (valores ASCII del 32 al 126
 *         inclusive), de lo contrario retorna 0.
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
	printf("31 -> %d\n", ft_isprint(31));	// Esperado: 0
	printf("32 -> %d\n", ft_isprint(32));	// Esperado: 1
	printf("65 -> %d\n", ft_isprint(65));	// Esperado: 1
	printf("126 -> %d\n", ft_isprint(126));	// Esperado: 1
	printf("127 -> %d\n", ft_isprint(127));	// Esperado: 0
	return (0);
} */