/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:17:22 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/02 19:52:38 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Localiza la última aparición del carácter c en la cadena s.
 * @param s Puntero a la cadena a buscar.
 * @param c El carácter a localizar (como un int, pero tratado como un char).
 * @return Un puntero a la última aparición de c en s, o NULL si c no se
 *         encuentra.
*/

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/* #include <stdio.h>
int	main(void)
{
	const char str[] = "Hello, World!";
	char ch = 'o';
	char *result = ft_strrchr(str, ch);
	if (result)
		printf("Ultima aparición de '%c': %s\n", ch, result);
	else
		printf("Caracter '%c' no encontrado.\n", ch);
	ch = 'z';
	result = ft_strrchr(str, ch);
	if (result)
		printf("Ultima aparición de '%c': %s\n", ch, result);
	else
		printf("Caracter '%c' no encontrado.\n", ch);
	return (0);
} */