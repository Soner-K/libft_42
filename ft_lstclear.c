/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <sokaraku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:57:23 by sokaraku          #+#    #+#             */
/*   Updated: 2023/11/07 18:42:24 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	size_t	i;

	i = ft_lstsize(*lst);
	del(*lst);
	i--;
	if (i != 0)
		ft_lstclear(lst, del);
	free(*lst);
	if (i == 0)
		lst = NULL;
}