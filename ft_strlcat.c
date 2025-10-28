/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 00:48:39 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/28 02:54:51 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Appends the string src to the end of dst.
 *        It will append at most dstsize - strlen(dst) - 1 characters.
 *        It will then NUL-terminate, unless dstsize is 0 or
 *        the original dst string was longer than dstsize.
 * @param dst Pointer to the destination string.
 * @param src Pointer to the source string.
 * @param dstsize The total size of the destination buffer.
 * @return The total length of the string it tried to create,
 *         that is the initial length of dst plus the length of src.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	c;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	i = dst_len;
	c = 0;
	while (src[c] && i < dstsize - 1)
	{
		dst[i] = src[c];
		i++;
		c++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
/* #include <stdio.h>
int	main(void)
{
	char dst1[15] = "Hello";
	char src1[] = " World!";
	size_t res1 = ft_strlcat(dst1, src1, sizeof(dst1));
	printf("Result 1: '%s' | Return: %zu\n", dst1, res1);
	// Expected: "Hello World!" | Return: 12
	char dst2[5] = "Hi";
	char src2[] = " there";
	size_t res2 = ft_strlcat(dst2, src2, sizeof(dst2));
	printf("Result 2: '%s' | Return: %zu\n", dst2, res2);
	// Expected: "Hi t" | Return: 8
	char dst3[1] = "";
	size_t res3 = ft_strlcat(dst3, "42", 0);
	printf("Result 3: (size 0) -> %zu\n", res3);
	// Expected: 2
	return (0);
} */