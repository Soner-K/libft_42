/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <sokaraku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:59:42 by sokaraku          #+#    #+#             */
/*   Updated: 2023/11/07 14:48:35 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	if (size == 0 || i > size)
		return (size + j);
	if (src[i] == 0)
		return (i);
	j = 0;
	while (src[j] && (i + j < size - 1))
	{
		dst[i + j] = (char)src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}