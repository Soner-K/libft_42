/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <sokaraku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:58:05 by sokaraku          #+#    #+#             */
/*   Updated: 2023/11/11 17:51:20 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*one_b;

	if (!s)
		return ;
	one_b = s;
	while (n--)
	{
		*one_b = 0;
		one_b++;
	}
}
