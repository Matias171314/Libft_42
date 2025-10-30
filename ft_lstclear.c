/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 00:07:40 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/30 00:13:04 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** @brief Deletes and frees all nodes of the list using 'del',
**        and sets the list pointer to NULL.
** @param lst The address of a pointer to the first node.
** @param del The function to delete the content of each node.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

/* 
#include <stdio.h>

static void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *a = ft_lstnew(ft_strdup("One"));
	t_list *b = ft_lstnew(ft_strdup("Two"));
	a->next = b;
	ft_lstclear(&a, del_content);
	printf("List cleared: %p\n", (void *)a); // Expected: NULL
}
 */
