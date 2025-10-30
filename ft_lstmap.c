/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 00:07:49 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/30 00:13:14 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** @brief Iterates the list and applies the function 'f' to each node's content,
**        creating a new list from the results. Uses 'del' to delete content
**        if allocation fails.
** @param lst The list to iterate.
** @param f The function to apply to each node's content.
** @param del The function to delete the content if needed.
** @return The new list, or NULL if allocation fails.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/* 
#include <stdio.h>

static void	*duplicate_content(void *content)
{
	return (ft_strdup((char *)content));
}

static void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *a = ft_lstnew("One");
	t_list *b = ft_lstnew("Two");
	a->next = b;
	t_list *dup = ft_lstmap(a, duplicate_content, del_content);
	ft_lstiter(dup, (void *)ft_putendl_fd);
	ft_lstclear(&dup, del_content);
	free(b);
	free(a);
}
 */
