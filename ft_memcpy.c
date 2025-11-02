/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:33:36 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/01 21:01:07 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copia n bytes desde la memoria src a la memoria dest.
 * @param dest Puntero al área de memoria de destino.
 * @param src Puntero al área de memoria de origen.
 * @param n El número de bytes a copiar.
 * @return Un puntero al área de memoria de destino dest.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dest == src || n == 0)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n > 0)
	{
		*(d++) = *(s++);
		n--;
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	const char src[] = "Hello 42!";
	char dest[20] = "      Matias";
	ft_memcpy(dest, src, 6);
	dest[14] = '\0';
	printf("Copia string: %s\n", dest);		// Esperado: "Hello Matias"
	int a[] = {1, 2, 3, 4};
	int b[4];
	ft_memcpy(b, a, sizeof(a));				// Esperado: 1 2 3 4
	printf("Copia ints: %d %d %d %d\n", b[0], b[1], b[2], b[3]);
} */