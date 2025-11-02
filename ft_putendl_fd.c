/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:41:56 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/02 12:31:35 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Escribe la cadena de texto 's' seguida de un salto de línea
 *        en el descriptor de archivo dado 'fd'.
 * @param s La cadena de texto a escribir.
 * @param fd El descriptor de archivo donde se escribirá la cadena.
 */

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
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
	ft_putendl_fd("Hello, World!", fd);
	close(fd);
	return (0);
} */
