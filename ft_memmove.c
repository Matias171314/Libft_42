/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:20:49 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/28 02:06:26 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies n bytes from memory area src to memory area dest.
 *        The memory areas may overlap; the copy is done in a non-destructive
 *        manner.
 * @param dest Pointer to the destination memory area.
 * @param src Pointer to the source memory area.
 * @param n The number of bytes to copy.
 * @return A pointer to the destination memory area dest.
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dest == src || n == 0)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d > s)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char dest[20] = "      Matias";
	const char src[] = "Hello 42!";
	ft_memmove(dest, src, 6);
	dest[14] = '\0';
	printf("Moved string: %s\n", dest); // Expected: "Hello Matias"

	int a[] = {1, 2, 3, 4};
	int b[4];
	ft_memmove(b, a, sizeof(a));		// Expected: 1 2 3 4
	printf("Moved ints: %d %d %d %d\n", b[0], b[1], b[2], b[3]);
} */