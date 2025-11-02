/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 00:07:36 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/02 13:53:13 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Añade el nodo 'new' al final de la lista enlazada apuntada por 'lst'.
 * @param lst Puntero al puntero de la cabeza de la lista enlazada.
 * @param new El nodo a añadir a la lista.
 */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/* #include <stdio.h>
int	main(void)
{
	t_list *a = ft_lstnew("One");
	t_list *b = ft_lstnew("Two");
	t_list *c = ft_lstnew("Three");
	ft_lstadd_back(&a, b);
	ft_lstadd_back(&a, c);
	printf("%s %s %s\n", (char *)a->content, 
	(char *)a->next->content, (char *)a->next->next->content);
	free(c);
	free(b);
	free(a);
} */