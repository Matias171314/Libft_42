/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:28:36 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/02 12:15:23 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Convierte un carácter minúsculo a mayúsculo.
 * @param c El carácter a convertir.
 * @return El equivalente en mayúscula si c es una letra minúscula,
 *         de lo contrario, devuelve c sin cambios.
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
	printf("'a' -> '%c'\n", ft_toupper('a'));	// Esperado: 'A'
	printf("'z' -> '%c'\n", ft_toupper('z'));	// Esperado: 'Z'
	printf("'m' -> '%c'\n", ft_toupper('m'));	// Esperado: 'M'
	printf("'A' -> '%c'\n", ft_toupper('A'));	// Esperado: 'A'
	printf("'Z' -> '%c'\n", ft_toupper('Z'));	// Esperado: 'Z'
	printf("'M' -> '%c'\n", ft_toupper('M'));	// Esperado: 'M'
	printf("'1' -> '%c'\n", ft_toupper('1'));	// Esperado: '1'
	printf("'!' -> '%c'\n", ft_toupper('!'));	// Esperado: '!'
	return (0);
} */