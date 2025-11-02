/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:36:43 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/02 12:41:07 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Escriba la cadena de texto 's' en el descriptor de archivo dado 'fd'.
 * @param s La cadena de texto a escribir.
 * @param fd El descriptor de archivo donde se escribirá la cadena.
 */

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

/* #include <fcntl.h>
#include <stdio.h>
int	main(void)
{
	int	fd;
	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("Error: No se pudo abrir el archivo");
		return (1);
	}
	ft_putstr_fd("Hello, World!\n", fd);
	close(fd);
	return (0);
} */