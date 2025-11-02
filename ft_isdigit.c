/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 00:53:05 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/01 20:56:11 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Comprueba si el carácter dado es un dígito (0-9).
 * @param c El carácter a comprobar, representado como un entero.
 * @return Retorna 1 si el carácter es un dígito, de lo contrario retorna 0.
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
	printf("'0' -> %d\n", ft_isdigit('0'));	// Esperado: 1
	printf("'5' -> %d\n", ft_isdigit('5'));	// Esperado: 1
	printf("'9' -> %d\n", ft_isdigit('9'));	// Esperado: 1
	printf("'a' -> %d\n", ft_isdigit('a'));	// Esperado: 0
	printf("'Z' -> %d\n", ft_isdigit('Z'));	// Esperado: 0
	printf("' ' -> %d\n", ft_isdigit(' '));	// Esperado: 0
	printf("'-' -> %d\n", ft_isdigit('-'));	// Esperado: 0
	return (0);
} */