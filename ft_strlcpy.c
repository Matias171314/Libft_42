/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 00:35:20 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/28 02:32:07 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies up to dstsize - 1 characters from the string src to dst,
 *        null-terminating the result if dstsize is not 0.
 * @param dst Pointer to the destination string.
 * @param src Pointer to the source string.
 * @param dstsize The size of the destination buffer.
 * @return The total length of the string it tried to create,
 *         that is the length of src.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize < 1)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/* #include <stdio.h>
int	main(void)
{
	char src[] = "Hello 42 Madrid";
	char dst[8];
	printf("src: \"%s\"\n", src);
	size_t len = ft_strlcpy(dst, src, 9);
	printf("dst: \"%s\"\n", dst);
	printf("Returned length: %zu\n", len); // Expected: length of src
	return (0);
} */