/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:33:21 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/02 12:14:46 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Convierte un carácter mayúscula a minúscula.
 * @param c El carácter a convertir.
 * @return El equivalente en minúscula si c es una letra mayúscula,
 *         de lo contrario, devuelve c sin cambios.
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
	printf("'A' -> '%c'\n", ft_tolower('A'));	// Esperado: 'a'
	printf("'Z' -> '%c'\n", ft_tolower('Z'));	// Esperado: 'z'
	printf("'M' -> '%c'\n", ft_tolower('M'));	// Esperado: 'm'
	printf("'a' -> '%c'\n", ft_tolower('a'));	// Esperado: 'a'
	printf("'z' -> '%c'\n", ft_tolower('z'));	// Esperado: 'z'
	printf("'m' -> '%c'\n", ft_tolower('m'));	// Esperado: 'm'
	printf("'1' -> '%c'\n", ft_tolower('1'));	// Esperado: '1'
	printf("'!' -> '%c'\n", ft_tolower('!'));	// Esperado: '!'
	return (0);
} */