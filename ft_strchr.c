/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:11:41 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/02 13:34:17 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Localiza la primera aparición del carácter c en la cadena s.
 * @param s Puntero a la cadena a buscar.
 * @param c El carácter a localizar (como un int, pero tratado como un char).
 * @return Un puntero a la primera aparición de c en s, o NULL si c no se
 *         encuentra.
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/* #include <stdio.h>
int	main(void)
{
	const char str[] = "Hello, World!";
	char ch = 'o';
	char *result = ft_strchr(str, ch);
	if (result)
		printf("Primer aparición de '%c': %s\n", ch, result);
	else
		printf("Caracter '%c' no encontrado.\n", ch);
	ch = 'z';
	result = ft_strchr(str, ch);
	if (result)
		printf("Primer aparición de '%c': %s\n", ch, result);
	else
		printf("Caracter '%c' no encontrado.\n", ch);
	return (0);
} */