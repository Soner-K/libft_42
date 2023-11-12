/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <sokaraku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:59:58 by sokaraku          #+#    #+#             */
/*   Updated: 2023/11/11 18:37:06 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_inset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_nowhere(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1[0] == 0)
		return (0);
	while (s1[i])
	{
		while (set[j])
		{
			if (s1[i] == set[j])
				return (1);
			j++;
		}
		i++;
		j = 0;
	}
	if (s1[1])
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	last;
	size_t	i;
	size_t	begin;
	char	*new;

	last = ft_strlen(s1) - 1;
	i = 0;
	begin = 0;
	while (ft_inset(s1[begin], set) == 1)
		begin++;
	while (ft_inset(s1[last], set) == 1 && last)
		last--;
	if (last == 0 || ft_nowhere(s1, set) == 0)
	{
		new = malloc(sizeof(char));
		*new = '\0';
		return (new);
	}
	new = (char *)ft_calloc((last - begin + 2), sizeof(char));
	if (!new)
		return (NULL);
	while (begin <= last)
		new[i++] = s1[begin++];
	new[i] = '\0';
	return (new);
}

// int	main(void)
// {
// 	// char s1[] = "aaaxxxtripouille";
// 	// char set[] = "ax";
// 	printf("\ntest ttrim = %s\n", ft_strtrim("", "123"));
// }