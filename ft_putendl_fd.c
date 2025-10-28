/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:41:56 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/28 18:41:57 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs the string 's' to the given file descriptor 'fd',
 *        followed by a newline.
 * @param s The string to output.
 * @param fd The file descriptor where the string will be written.
 */

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return;
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
		perror("Error opening file");
		return (1);
	}
	ft_putendl_fd("Hello, World!", fd);
	close(fd);
	return (0);
} */
