/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 00:48:39 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/02 13:30:37 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Concatena la cadena src al final de la cadena dst, asegurando que no se
 *        sobrepase el tamaño del búfer dstsize. Siempre termina la cadena dst
 *        con un carácter nulo si dstsize es mayor que 0.
 * @param dst Puntero a la cadena de destino.
 * @param src Puntero a la cadena de origen.
 * @param dstsize El tamaño total del búfer de destino.
 * @return La longitud total de la cadena que intentó crear,
 *         que es la longitud inicial de dst más la longitud de src.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	c;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	i = dst_len;
	c = 0;
	while (src[c] && i < dstsize - 1)
	{
		dst[i] = src[c];
		i++;
		c++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
/* #include <stdio.h>
int	main(void)
{
	char dst1[15] = "Hello";
	char src1[] = " World!";
	size_t res1 = ft_strlcat(dst1, src1, sizeof(dst1));
	printf("Resultado: '%s' | Return: %zu\n", dst1, res1);
	// Esperado: "Hello World!" | Return: 12
	char dst2[5] = "Hi";
	char src2[] = " there";
	size_t res2 = ft_strlcat(dst2, src2, sizeof(dst2));
	printf("Resultado: '%s' | Return: %zu\n", dst2, res2);
	// Esperado: "Hi t" | Return: 8
	char dst3[1] = "";
	size_t res3 = ft_strlcat(dst3, "42", 0);
	printf("Resultado: (size 0) -> %zu\n", res3);
	// Esperado: 2
	return (0);
} */