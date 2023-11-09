/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <sokaraku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:58:55 by sokaraku          #+#    #+#             */
/*   Updated: 2023/11/09 15:04:35 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	const unsigned char *src_2;
	unsigned char *dest_2;

	if (!dest || !src)
		return (NULL);
	i = 0;
	src_2 = src;
	dest_2 = dest;
	while (i < n)
	{
		dest_2[i] = src_2[i];
		if (src_2[i] == c)
			return (dest);
		i++;
	}
	return (NULL);
}