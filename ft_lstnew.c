/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 00:07:52 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/02 13:47:46 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Crea un nuevo nodo de lista enlazada.
 * @param content El contenido del nuevo nodo.
 * @return Un puntero al nuevo nodo, o NULL si la asignación falla.
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

/* #include <stdio.h>
int	main(void)
{
	t_list *n = ft_lstnew("Hello 42");
	printf("Contenido: %s\n", (char *)n->content);
	free(n);
} */