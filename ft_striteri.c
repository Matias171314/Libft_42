/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:46:51 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/29 21:42:01 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** @brief Applies the function 'f' to each character of the string 's',
**        passing its index as the first argument.
**        Each character can be modified directly in the string.
** @param s The string on which to iterate.
** @param f The function to apply to each character (receives index and pointer
**          to char).
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* 
#include <stdio.h>

static void	to_upper_inplace(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

int	main(void)
{
	char str[] = "libft project";
	ft_striteri(str, to_upper_inplace);
	printf("Modified: %s\n", str); // Expected: "LIBFT PROJECT"
}
*/
