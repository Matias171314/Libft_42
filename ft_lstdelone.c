/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 00:07:43 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/30 00:12:58 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** @brief Frees the memory of the node's content using 'del',
**        then frees the node itself.
** @param lst The node to free.
** @param del The function to delete the content of the node.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/* 
#include <stdio.h>

static void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	char *data = ft_strdup("Delete me!");
	t_list *node = ft_lstnew(data);
	ft_lstdelone(node, del_content);
}
 */
