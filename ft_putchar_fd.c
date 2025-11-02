/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:33:17 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/02 12:31:00 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Escribe el carácter c en el descriptor de archivo dado fd.
 * @param c El carácter a escribir.
 * @param fd El descriptor de archivo donde se escribirá el carácter.
 */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
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
	ft_putchar_fd('A', fd);
	ft_putchar_fd('\n', fd);
	close(fd);
	return (0);
} */