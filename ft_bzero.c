/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:13:40 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/01 20:55:38 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Llena un área de memoria con ceros.
 * @param s Puntero al área de memoria que se va a llenar.
 * @param n El número de bytes que se van a establecer en cero.
 */

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	char str1[50] = "Hello, World!";
	char str2[50] = "Hello, World!";
	ft_bzero(str1, 5);
	bzero(str2, 5);
	printf("ft_bzero: %s\n", str1);	// Esperado: "\0\0\0\0\0, World!"
	printf("bzero:   %s\n", str2);	// Esperado: "\0\0\0\0\0, World!"
	return (0);
} */