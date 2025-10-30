/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 00:07:45 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/30 00:13:10 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** @brief Iterates the list and applies the function 'f'
**        to the content of each node.
** @param lst The beginning of the list.
** @param f The function to apply to each node's content.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* 
#include <stdio.h>

static void	print_upper(void *content)
{
	char *str = (char *)content;
	while (*str)
	{
		ft_putchar_fd(ft_toupper(*str), 1);
		str++;
	}
	ft_putchar_fd('\n', 1);
}

int	main(void)
{
	t_list *a = ft_lstnew("hello");
	t_list *b = ft_lstnew("libft");
	a->next = b;
	ft_lstiter(a, print_upper);
	free(b);
	free(a);
}
 */
