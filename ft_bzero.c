/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:13:40 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/28 01:38:22 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Sets the first n bytes of the memory area pointed to by s to zero.
 * @param s Pointer to the memory area to be zeroed.
 * @param n The number of bytes to be set to zero.
 */

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	char str1[50] = "Hello, World!";
	char str2[50] = "Hello, World!";
	ft_bzero(str1, 5);
	bzero(str2, 5);
	printf("ft_bzero: %s\n", str1);   // Expected: "\0\0\0\0\0, World!"
	printf("bzero:   %s\n", str2);   // Expected: "\0\0\0\0\0, World!"
	return (0);
} */