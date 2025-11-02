/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 00:12:24 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/02 13:14:13 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Calcula la longitud de una cadena de caracteres.
 * @param s La cadena de caracteres cuya longitud se va a calcular.
 * @return La longitud de la cadena.
 */

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/* #include <stdio.h>
int	main(void)
{
	printf("\"Hello\" -> %zu\n", ft_strlen("Hello"));			// Esperado: 5
	printf("\"\" (empty) -> %zu\n", ft_strlen(""));				// Esperado: 0
	printf("\"42 Madrid\" -> %zu\n", ft_strlen("42 Madrid"));	// Esperado: 9
	printf("\"A\\0BCD\" -> %zu\n", ft_strlen("A\0BCD"));		// Esperado: 1
	return (0);
} */