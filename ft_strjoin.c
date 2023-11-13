/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <sokaraku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:59:40 by sokaraku          #+#    #+#             */
/*   Updated: 2023/11/11 18:02:43 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*new;
	size_t		size;

	size = ft_strlen(s1) + ft_strlen(s2);
	new = (char *)ft_calloc(size + 1, sizeof(char));
	if (!new)
		return (NULL);
	ft_memcpy(new, s1, ft_strlen(s1));
	ft_memcpy(new + ft_strlen(s1), s2, ft_strlen(s2));
	new[size] = '\0';
	return (new);
}
