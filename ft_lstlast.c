/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 00:07:47 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/02 13:50:52 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Devuelve el último nodo de una lista enlazada.
 * @param lst Puntero al primer nodo de la lista enlazada.
 * @return Puntero al último nodo de la lista, o NULL si la lista está vacía.
 */

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* #include <stdio.h>
int	main(void)
{
	t_list *a = ft_lstnew("Hello");
	t_list *b = ft_lstnew("42");
	a->next = b;
	printf("Contenido del Ultimo nodo: %s\n", (char *)ft_lstlast(a)->content); 
	// Esperado: "42"
	free(b);
	free(a);
} */