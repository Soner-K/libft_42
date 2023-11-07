/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <sokaraku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:51:54 by sokaraku          #+#    #+#             */
/*   Updated: 2023/11/07 14:49:51 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	size_t	i;

	i = ft_lstsize(*lst) - 1;
	if (!lst)
		return ;
	while (--i)
	*lst = (*lst)->next;
	new = (*lst)->next;
	new->next = NULL;
}
