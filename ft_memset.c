/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 00:23:07 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/01 22:17:02 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Llena un área de memoria con un valor byte específico.
 * @param s Puntero al área de memoria que se va a llenar.
 * @param c El valor byte con el que se llenará el área de memoria.
 * @param n El número de bytes que se van a llenar.
 * @return Un puntero al área de memoria s.
*/

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*(ptr++) = (unsigned char)c;
		n --;
	}
	return (s);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	char str1[50] = "Hello, World!";
	char str2[50] = "Hello, World!";
	ft_memset(str1, '*', 5);
	memset(str2, '*', 5);
	printf("ft_memset: %s\n", str1);	// Esperado: "***** World!"
	printf("memset:   %s\n", str2);		// Esperado: "***** World!"
	return (0);
} */