/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 00:07:38 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/30 00:17:59 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** @brief Adds the node 'new' at the beginning of the list.
** @param lst The address of a pointer to the first node.
** @param new The node to add to the list.
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/* 
#include <stdio.h>

int	main(void)
{
	t_list *a = ft_lstnew("World");
	t_list *b = ft_lstnew("Hello");
	ft_lstadd_front(&a, b);
	printf("%s %s\n", (char *)a->content, (char *)a->next->content); 
	// Expected: "Hello World"
	free(b);
	free(a->next);
}
 */
