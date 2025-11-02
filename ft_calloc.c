/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:09:02 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/02 12:26:47 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Asigna memoria para un número específico de elementos de un
 *        tamaño dado e inicializa toda la memoria asignada a cero.
 * @param count Número de elementos.
 * @param size Tamaño de cada elemento en bytes.
 * @return Un puntero a la memoria asignada, o NULL si la asignación falla.
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total;

	total = count * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}

/* #include <stdio.h>
int	main(void)
{
	int	*arr;
	size_t	i;
	arr = ft_calloc(5, sizeof(int));
	if (!arr)
	{
		printf("Error: Memoria no asignada\n");
		return (1);
	}
	for (i = 0; i < 5; i++)
		printf("arr[%zu] = %d\n", i, arr[i]);
	free(arr);
	return (0);
} */