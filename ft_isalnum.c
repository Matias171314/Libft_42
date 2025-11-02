/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 02:19:20 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/01 20:55:47 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Comprueba si el carácter dado es alfanumérico (A-Z, a-z o 0-9).
 * @param c El carácter a comprobar, representado como un entero.
 * @return Retorna 1 si el carácter es alfanumérico (A-Z, a-z o 0-9),
 *         de lo contrario retorna 0.
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
	printf("'A' -> %d\n", ft_isalnum('A'));	// Esperado: 1
	printf("'z' -> %d\n", ft_isalnum('z'));	// Esperado: 1
	printf("'5' -> %d\n", ft_isalnum('5'));	// Esperado: 1
	printf("'#' -> %d\n", ft_isalnum('#'));	// Esperado: 0
	printf("' ' -> %d\n", ft_isalnum(' '));	// Esperado: 0
	return (0);
} */