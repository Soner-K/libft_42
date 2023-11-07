/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <sokaraku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:59:32 by sokaraku          #+#    #+#             */
/*   Updated: 2023/11/07 14:48:24 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
	char *res;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			res = (char *)&s[i];
			return (res);
		}
		i++;
	}
	if (c == 0)
	{
		if (s[i] == '\0')
		{
			res = (char *)&s[i];
		}
	}
	return (NULL);
}