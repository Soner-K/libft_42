/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <sokaraku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:58:17 by sokaraku          #+#    #+#             */
/*   Updated: 2023/11/10 12:01:51 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	if ((size != 0) && nmemb >= __SIZE_MAX__  / size)
		return (NULL);
	// if (nmemb < 0)
	// 	return (NULL);
	void *ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	if (nmemb == 0 || !size)
		return (ptr);	
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}