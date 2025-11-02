/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 00:07:45 by mvasquez          #+#    #+#             */
/*   Updated: 2025/11/02 13:51:16 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Itera sobre cada nodo de la lista enlazada 'lst' y aplica la función
 *        'f' al contenido de cada nodo.
 * @param lst Puntero al primer nodo de la lista enlazada.
 * @param f Función a aplicar a cada contenido de los nodos.
 */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* #include <stdio.h>
static void	print_upper(void *content)
{
	char *str = (char *)content;
	while (*str)
	{
		ft_putchar_fd(ft_toupper(*str), 1);
		str++;
	}
	ft_putchar_fd('\n', 1);
}
int	main(void)
{
	t_list *a = ft_lstnew("hello");
	t_list *b = ft_lstnew("libft");
	a->next = b;
	ft_lstiter(a, print_upper);
	free(b);
	free(a);
} */