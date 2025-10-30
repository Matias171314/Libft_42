/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 00:07:33 by mvasquez          #+#    #+#             */
/*   Updated: 2025/10/30 00:12:37 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** @brief Counts the number of nodes in a list.
** @param lst The beginning of the list.
** @return The length of the list.
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

/* 
#include <stdio.h>

int	main(void)
{
	t_list *a = ft_lstnew("One");
	t_list *b = ft_lstnew("Two");
	t_list *c = ft_lstnew("Three");
	a->next = b;
	b->next = c;
	printf("Size: %d\n", ft_lstsize(a)); // Expected: 3
	free(c);
	free(b);
	free(a);
}
 */
