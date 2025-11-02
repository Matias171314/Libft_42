/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:44:33 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/02 13:39:12 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Localiza la primera aparición de la subcadena 'little' en la
 *        cadena 'big'
 * @param little La subcadena a buscar.
 * @param len El número máximo de caracteres a buscar.
 * @return Un puntero a la primera aparición de 'little' en 'big' dentro de
 *         los primeros 'len' caracteres, o NULL si no se encuentra.
 */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
int main()
{
	const char *big = "Hola esto es un ejemplo.";
	const char *little = "es ";
	size_t len = 25;
	char *result = ft_strnstr(big, little, len);
	if (result)
		printf("Encontrado: %s\n", result);
	else
		printf("No encontrado\n");
	return 0;
} */