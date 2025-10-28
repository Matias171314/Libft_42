/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:33:17 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/28 18:33:20 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs the character 'c' to the given file descriptor 'fd'.
 * @param c The character to output.
 * @param fd The file descriptor where the character will be written.
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
		perror("Error opening file");
		return (1);
	}
	ft_putchar_fd('A', fd);
	ft_putchar_fd('\n', fd);
	close(fd);
	return (0);
} */