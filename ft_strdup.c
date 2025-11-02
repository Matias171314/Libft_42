/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:09:05 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/02 13:14:55 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Duplica una cadena de texto asignando memoria dinámica para la 
 *        nueva cadena.
 * @param s1 La cadena a duplicar.
 * @return Un puntero a la nueva cadena duplicada, o NULL si la asignación falla.
*/

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	copy = (char *)malloc(len + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/* #include <stdio.h>
int	main(void)
{
	const char *original = "Hello, World!";
	char *duplicate = ft_strdup(original);
	if (duplicate)
	{
		printf("Original: %s\n", original);
		printf("Duplicado: %s\n", duplicate);
		free(duplicate);
	}
	else
	{
		printf("Error: Memoria no asignada\n");
	}
	return (0);
} */