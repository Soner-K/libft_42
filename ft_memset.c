/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <sokaraku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:59:13 by sokaraku          #+#    #+#             */
/*   Updated: 2023/11/08 12:09:19 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *one_b;
	size_t i;

	one_b = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		one_b[i] = c;
		i++;
	}
	return (s);
}
