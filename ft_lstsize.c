/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 00:07:33 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/02 13:49:13 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Cuenta el número de nodos en una lista enlazada.
 * @param lst Puntero al primer nodo de la lista enlazada.
 * @return El número de nodos en la lista.
 */

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/* #include <stdio.h>
int	main(void)
{
	t_list *a = ft_lstnew("One");
	t_list *b = ft_lstnew("Two");
	t_list *c = ft_lstnew("Three");
	a->next = b;
	b->next = c;
	printf("Size: %d\n", ft_lstsize(a));	// Esperado: 3
	free(c);
	free(b);
	free(a);
} */