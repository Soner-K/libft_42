/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <sokaraku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:59:01 by sokaraku          #+#    #+#             */
/*   Updated: 2023/11/07 14:47:56 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *s_2;

	i = 0;
	s_2 = (unsigned char *)s;
	while (i < n)
	{
		if (s_2[i] == c)
			return (&(s_2[i]));
		i++;
	}
	return (NULL);
}