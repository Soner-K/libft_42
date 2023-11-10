/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <sokaraku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:57:23 by sokaraku          #+#    #+#             */
/*   Updated: 2023/11/10 13:59:53 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_lstclear(t_list **lst, void (*del)(void *))
// {
// 	size_t	i;

// 	i = ft_lstsize(*lst);
// 	del(*lst);
// 	i--;
// 	if (i != 0)
// 		ft_lstclear(lst, del);
// 	free(*lst);
// 	if (i == 0)
// 		lst = NULL;
// }

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *ptr;

	// if (!lst || !del) //?del?
	// 	return ;
	while ((*lst))
	{
		ptr = (*lst)->next; 
		ft_lstdelone(*lst, del);
		*lst = ptr;
	}
}