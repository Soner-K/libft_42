/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <sokaraku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:00:00 by sokaraku          #+#    #+#             */
/*   Updated: 2023/11/13 12:55:02 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_pars(char const *s, unsigned int *start, size_t *len)
{
	size_t	len_s;

	len_s = ft_strlen(s);
	if ((*start) > len_s)
	{
		*len = 0;
		return (1);
	}
	if ((*len) >= len_s)
	{
		if (*start < *len && (*len - *start) < len_s)
			*len -= *start;
		else
			*len = len_s;
	}
	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	if (ft_pars(s, &start, &len))
	{
		new = ft_calloc(1, sizeof(char));
		new[0] = '\0';
	}
	else
		new = ft_calloc(len + 1, sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (len-- && s[start])
		new[i++] = s[start++];
	new[i] = '\0';
	return (new);
}

// int main()
// {
// 	char	s[] = "Salut";

// 	printf("%s\n", ft_substr((const char *) s, 0, 2));
// }

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t i;
// 	size_t j;
// 	char *str;

// 	str = (char *)malloc(sizeof(*s) * (len + 1));
// 	if (!str)
// 		return (NULL);
// 	i = 0;
// 	j = 0;
// 	while (s[i])
// 	{
// 		if (i >= start && j < len)
// 		{
// 			str[j] = s[i];
// 			j++;
// 		}
// 		i++;
// 	}
// 	str[j] = 0;
// 	return (str);
// }