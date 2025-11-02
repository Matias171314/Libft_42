/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 19:33:19 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/02 13:38:23 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compara dos áreas de memoria byte por byte.
 * @param s1 Puntero a la primera área de memoria.
 * @param s2 Puntero a la segunda área de memoria.
 * @param n úmero de bytes a comparar.
 * @return Un entero menor que, igual a, o mayor que cero si los primeros n
 *         bytes de s1 se encuentran, respectivamente, en ser menores, coincidir,
 *         o ser mayores que los primeros n bytes de s2.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>
int main() {
	const char *str1 = "Hello, World!";
	const char *str2 = "Hello, World?";
	size_t n = 13;
	int result_ft = ft_memcmp(str1, str2, n);
	int result_std = memcmp(str1, str2, n);
	printf("ft_memcmp resultado: %d\n", result_ft);
	printf("memcmp resultado: %d\n", result_std);
	return 0;
} */
