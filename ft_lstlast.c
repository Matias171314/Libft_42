/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 00:07:47 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/30 00:18:12 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** @brief Returns the last node of the list.
** @param lst The beginning of the list.
** @return The last node, or NULL if the list is empty.
*/
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* 
#include <stdio.h>

int	main(void)
{
	t_list *a = ft_lstnew("Hello");
	t_list *b = ft_lstnew("42");
	a->next = b;
	printf("Last node content: %s\n", (char *)ft_lstlast(a)->content); 
	// Expected: "42"
	free(b);
	free(a);
}
 */
