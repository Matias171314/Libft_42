/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:46:26 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/02 13:44:14 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Convierte un número entero en una cadena de caracteres.
 * @param n El número entero a convertir.
 * @return Un puntero a la cadena de caracteres resultante, o NULL si la
 *         asignación falla.
 */
static int	ft_numlen(long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		len;

	nb = n;
	len = ft_numlen(nb);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (len-- && str[len] != '-')
	{
		str[len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

/* #include <stdio.h>
int	main(void)
{
	char *s1 = ft_itoa(42);
	char *s2 = ft_itoa(-2147483648);
	printf("%s\n%s\n", s1, s2);
	free(s1);
	free(s2);
} */