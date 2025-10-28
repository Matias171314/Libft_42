/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:09:02 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/28 03:23:38 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates memory for an array of count elements of size bytes each
 *        and initializes all bytes to zero.
 * @param count Number of elements.
 * @param size Size of each element in bytes.
 * @return A pointer to the allocated memory, or NULL if the allocation fails.
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
		printf("Memory allocation failed\n");
		return (1);
	}
	for (i = 0; i < 5; i++)
		printf("arr[%zu] = %d\n", i, arr[i]);
	free(arr);
	return (0);
} */