/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:17:22 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/28 03:10:08 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the last occurrence of c (converted to a char) in the string
 *        pointed to by s.
 * @param s Pointer to the string to be searched.
 * @param c The character to locate (as an int, but treated as a char).
 * @return A pointer to the last occurrence of c in s, or NULL if c is not
 *         found.
*/

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/* #include <stdio.h>
int	main(void)
{
	const char str[] = "Hello, World!";
	char ch = 'o';
	char *result = ft_strrchr(str, ch);
	if (result)
		printf("Last occurrence of '%c': %s\n", ch, result);
	else
		printf("Character '%c' not found.\n", ch);
	ch = 'z';
	result = ft_strrchr(str, ch);
	if (result)
		printf("Last occurrence of '%c': %s\n", ch, result);
	else
		printf("Character '%c' not found.\n", ch);
	return (0);
} */