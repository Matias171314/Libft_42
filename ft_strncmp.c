/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:27:51 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/02 13:36:21 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compara dos cadenas de caracteres hasta un máximo de n caracteres.
 * @param s1 Puntero a la primera cadena.
 * @param s2 Puntero a la segunda cadena.
 * @param n El número máximo de caracteres a comparar.
 * @return Un entero menor que, igual a, o mayor que cero si s1 (o los
 *         primeros n bytes de este) se encuentra, respectivamente, que es
 *         menor que, igual a, o mayor que s2.
 */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* #include <stdio.h>
int	main(void)
{
	printf("Cmp 'Hello' & 'Hello' (5): %d\n", ft_strncmp("Hello", "Hello", 5));
	// Esperado: 0
	printf("Cmp 'Hello' & 'Hellp' (5): %d\n", ft_strncmp("Hello", "Hellp", 5));
	// Esperado: valor negativo
	printf("Cmp 'Hello' & 'Hell' (5): %d\n", ft_strncmp("Hello", "Hell", 5));
	// Esperado: valor positivo
	printf("Cmp 'Apple' & 'ApPle' (5): %d\n", ft_strncmp("Apple", "ApPle", 5));
	// Esperado: valor positivo
	printf("Cmp 'Test' & 'Test' (0): %d\n", ft_strncmp("Test", "Test", 0));
	// Esperado: 0
	return (0);
} */