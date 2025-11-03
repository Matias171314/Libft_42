/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:15:09 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/03 01:30:23 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Asigna y devuelve una subcadena de la cadena 's'. La subcadena 
 *        comienza en el índice 'start' y tiene una longitud máxima de 'len'.
 * @param s La cadena original.
 * @param start El índice de inicio para la subcadena.
 * @param len La longitud máxima de la subcadena.
 * @return Un puntero a la nueva subcadena asignada, o NULL si
 *         la asignación falla.
 */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/* #include <stdio.h>
int	main(void)
{
	char	*str = "Hello, World!";
	char	*substr;
	substr = ft_substr(str, 7, 5);
	if (substr)
	{
		printf("Substring: %s\n", substr);
		free(substr);
	}
	return (0);
} */