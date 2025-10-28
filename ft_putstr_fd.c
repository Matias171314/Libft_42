/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:36:43 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/28 18:36:46 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs the string 's' to the given file descriptor 'fd'.
 * @param s The string to output.
 * @param fd The file descriptor where the string will be written.
 */

void ft_putstr_fd(char *s, int fd)
{
    if (s == NULL)
        return;
    while (*s)
    {
        ft_putchar_fd(*s, fd);
        s++;
    }
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
	ft_putstr_fd("Hello, World!\n", fd);
	close(fd);
	return (0);
} */