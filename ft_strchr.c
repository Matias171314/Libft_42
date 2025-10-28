/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:11:41 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/28 03:19:51 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the first occurrence of c (converted to a char) in the string
 *        pointed to by s.
 * @param s Pointer to the string to be searched.
 * @param c The character to locate (as an int, but treated as a char).
 * @return A pointer to the first occurrence of c in s, or NULL if c is not
 *         found.
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/* #include <stdio.h>
int	main(void)
{
	const char str[] = "Hello, World!";
	char ch = 'o';
	char *result = ft_strchr(str, ch);
	if (result)
		printf("First occurrence of '%c': %s\n", ch, result);
	else
		printf("Character '%c' not found.\n", ch);
	ch = 'z';
	result = ft_strchr(str, ch);
	if (result)
		printf("First occurrence of '%c': %s\n", ch, result);
	else
		printf("Character '%c' not found.\n", ch);
	return (0);
} */