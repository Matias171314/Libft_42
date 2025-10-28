/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:44:33 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/28 11:43:19 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the first occurrence of the null-terminated string 'little'
 *        in the string 'big', where not more than 'len' characters are searched.
 * @param big The string to be searched.
 * @param little The substring to search for.
 * @param len The maximum number of characters to search.
 * @return A pointer to the first occurrence of 'little' in 'big' within
 */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
int main()
{
	const char *big = "Hola esto es un ejemplo.";
	const char *little = "es ";
	size_t len = 25;
	char *result = ft_strnstr(big, little, len);
	if (result)
		printf("Found: %s\n", result);
	else
		printf("Not Found\n");
	return 0;
} */