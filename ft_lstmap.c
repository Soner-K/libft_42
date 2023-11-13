/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <sokaraku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:19:10 by sokaraku          #+#    #+#             */
/*   Updated: 2023/11/11 20:33:10 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*first;

	first = malloc(sizeof(t_list));
	if (!first)
		return (0);
	first = lst;
	while (lst->next)
	{
		ptr = lst;
		if (del)
		{
			del(lst->content);
			free(lst);
		}
		f(lst->content);
		lst = ptr->next;
	}
	return (first);
}

// int	main()
// {
	
// }