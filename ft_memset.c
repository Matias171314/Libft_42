/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 00:23:07 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/28 01:31:03 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Fills the first n bytes of the memory area pointed to by s
 * 	  with the constant byte c.
 * @param s Pointer to the memory area to be filled.
 * @param c The byte value to fill the memory area with.
 * @param n The number of bytes to be filled.
 * @return A pointer to the memory area s.
*/

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*(ptr++) = (unsigned char)c;
		n --;
	}
	return (s);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	char str1[50] = "Hello, World!";
	char str2[50] = "Hello, World!";
	ft_memset(str1, '*', 5);
	memset(str2, '*', 5);
	printf("ft_memset: %s\n", str1);   // Expected: "***** World!"
	printf("memset:   %s\n", str2);   // Expected: "***** World!"
	return (0);
} */