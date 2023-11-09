/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <sokaraku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:00:00 by sokaraku          #+#    #+#             */
/*   Updated: 2023/11/09 17:38:31 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	if (ft_strlen(s) < start && len > ft_strlen(s))
		return (NULL);
	new = (char *)ft_calloc((len + 1), sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	if (ft_strlen(s) > start )
	{
		while (s[start] && len--)
		{
			new[i] = (char)s[start];
			i++;
			start++;
		}
	}
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