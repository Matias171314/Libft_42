/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 00:07:38 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/03 09:08:33 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Añade el nodo 'new' al principio de la lista enlazada apuntada 
 *        por 'lst'.
 * @param lst Puntero al puntero de la cabeza de la lista enlazada.
 * @param new El nodo a añadir a la lista.
 */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/* #include <stdio.h>
int	main(void)
{
	t_list *a = ft_lstnew("World");
	t_list *b = ft_lstnew("Hello");
	ft_lstadd_front(&a, b);
	printf("%s %s\n", (char *)a->content, (char *)a->next->content); 
	// Esperado: "Hello World"
	free(b);
	free(a->next);
} */