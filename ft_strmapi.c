/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:47:07 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/02 13:46:26 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Aplica la función 'f' a cada carácter de la cadena 's' para
 *        crear una nueva cadena resultante.
 * @param s La cadena de texto original.
 * @param f La función a aplicar a cada carácter de la cadena.
 * @return Una nueva cadena resultante de aplicar 'f' a cada carácter de 's',
 *         o NULL si la asignación falla.
 */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	new_str = malloc(ft_strlen(s) + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/* #include <stdio.h>
static char	to_uppercase(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
int	main(void)
{
	char *s = "hello 42!";
	char *mapped = ft_strmapi(s, to_uppercase);
	printf("Original: %s\n", s);
	printf("Mapped:   %s\n", mapped); // Esperado: "HELLO 42!"
	free(mapped);
} */