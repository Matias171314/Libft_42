/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:46:51 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/03 03:22:05 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Aplica la función 'f' a cada carácter de la cadena 's',
 *        pasando el índice del carácter como primer argumento.
 * @param s La cadena de texto a modificar.
 * @param f La función a aplicar a cada carácter de la cadena.
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* #include <stdio.h>
static void	to_upper_inplace(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}
int	main(void)
{
	char str[] = "libft project";
	ft_striteri(str, to_upper_inplace);
	printf("Modificado: %s\n", str); // Esperado: "LIBFT PROJECT"
} */