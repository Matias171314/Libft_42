/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 00:35:20 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/02 19:27:42 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copia una cadena de texto desde src a dst, asegurando que no se
 *        sobrepase el tamaño del búfer dstsize. Siempre termina la cadena dst
 *        con un carácter nulo si dstsize es mayor que 0.
 * @param dst Puntero a la cadena de destino.
 * @param src Puntero a la cadena de origen.
 * @param dstsize El tamaño del búfer de destino.
 * @return La longitud total de la cadena que intentó crear,
 *         que es la longitud de src.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize < 1)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/* #include <stdio.h>
int	main(void)
{
	char src[] = "Hello 42 Madrid";
	char dst[8];
	printf("src: \"%s\"\n", src);
	size_t len = ft_strlcpy(dst, src, 8);
	printf("dst: \"%s\"\n", dst);
	printf("Returned length: %zu\n", len);	// Esperado: longitud de src
	return (0);
} */