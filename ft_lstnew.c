/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 00:07:52 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/30 00:11:21 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** @brief Allocates and returns a new node (t_list).
**        The member variable 'content' is initialized with 'content',
**        and 'next' is set to NULL.
** @param content The data to store in the new node.
** @return The new node, or NULL if allocation fails.
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/* 
#include <stdio.h>

int	main(void)
{
	t_list *n = ft_lstnew("Hello 42");
	printf("Content: %s\n", (char *)n->content);
	free(n);
}
 */
