/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:55:03 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/02 13:37:23 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Localiza la primera aparición del carácter c (convertido a un
 *        unsigned char) en los primeros n bytes de la cadena apuntada por s.
 * @param s La cadena a escanear.
 * @param c El carácter a localizar.
 * @param n El número de bytes a analizar.
 * @return Un puntero a la primera aparición del carácter c en la cadena s,
 * 		   o NULL si el carácter no se encuentra dentro de los primeros n bytes.
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>
int main() {
	const char *str = "Hello, World!";
	int c = 'W';
	size_t n = 13;
	void *result_ft = ft_memchr(str, c, n);
	void *result_std = memchr(str, c, n);
	if (result_ft)
		printf("ft_memchr encontró: %s\n", (char *)result_ft);
	else
		printf("ft_memchr no encontró el carácter.\n");
	if (result_std)
		printf("memchr encontró: %s\n", (char *)result_std);
	else
		printf("memchr no encontró el carácter.\n");
	return 0;
} */
