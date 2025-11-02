/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 00:12:36 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/01 20:55:55 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Comprueba si el carácter dado es una letra alfabética (A-Z o a-z).
 * @param c El carácter a comprobar, representado como un entero.
 * @return Retorna 1 si el carácter es una letra alfabética,
 *         de lo contrario retorna 0.
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
	printf("'A' -> %d\n", ft_isalpha('A'));	// Esperado: 1
	printf("'z' -> %d\n", ft_isalpha('z'));	// Esperado: 1
	printf("'M' -> %d\n", ft_isalpha('M'));	// Esperado: 1
	printf("'5' -> %d\n", ft_isalpha('5'));	// Esperado: 0
	printf("'#' -> %d\n", ft_isalpha('#'));	// Esperado: 0
	printf("' ' -> %d\n", ft_isalpha(' '));	// Esperado: 0
	return (0);
} */