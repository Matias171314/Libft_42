/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 00:07:40 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/02 13:52:48 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Elimina y libera todos los nodos de una lista enlazada.
 * @param lst Puntero al puntero del primer nodo de la lista.
 * @param del Función para liberar el contenido de cada nodo.
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

/* #include <stdio.h>
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
	printf("Lista: %p\n", (void *)a);	// Esperado: NULL
} */