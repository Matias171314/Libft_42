/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:33:36 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/28 02:03:51 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies n bytes from memory area src to memory area dest.
 * @param dest Pointer to the destination memory area.
 * @param src Pointer to the source memory area.
 * @param n The number of bytes to copy.
 * @return A pointer to the destination memory area dest.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dest == src || n == 0)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n > 0)
	{
		*(d++) = *(s++);
		n--;
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	const char src[] = "Hello 42!";
	char dest[20] = "      Matias";
	ft_memcpy(dest, src, 6);
	dest[14] = '\0';
	printf("Copied string: %s\n", dest); // Expected: "Hello Matias"
	
	int a[] = {1, 2, 3, 4};
	int b[4];
	ft_memcpy(b, a, sizeof(a));			// Expected: 1 2 3 4
	printf("Copied ints: %d %d %d %d\n", b[0], b[1], b[2], b[3]);
} */