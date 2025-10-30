/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:47:07 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/29 21:40:51 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** @brief Applies the function 'f' to each character of the string 's'
**        to create a new string resulting from successive applications of 'f'.
** @param s The string to iterate over.
** @param f The function to apply to each character (receives index and char).
** @return A new string (malloc'ed) created by applying 'f' to each character.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	new_str = malloc(ft_strlen(s) + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/* 
#include <stdio.h>

static char	to_uppercase(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main(void)
{
	char *s = "hello 42!";
	char *mapped = ft_strmapi(s, to_uppercase);
	printf("Original: %s\n", s);
	printf("Mapped:   %s\n", mapped); // Expected: "HELLO 42!"
	free(mapped);
}
*/
