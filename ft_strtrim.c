/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <sokaraku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:59:58 by sokaraku          #+#    #+#             */
/*   Updated: 2023/11/10 19:40:26 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char	ft_check(char c, char const *set)
// {
// 	size_t	i;

// 	i = 0;
// 	while (set[i])
// 	{
// 		if (c == set[i])
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char	*str;
// 	int		first;
// 	int		last;

// 	first = ft_check(s1[0], set);
// 	last = ft_check(s1[ft_strlen(s1) - 1], set);
// 	// printf("first = %d\net last = %d\n", first, last);
// 	str = ft_calloc(ft_strlen(s1) - first - last + 1, sizeof(char));
// 	if (!str)
// 		return (NULL);
// 	if (last + first == 2)
// 		ft_memcpy(str, s1 + first, ft_strlen(s1) - last - 1);
// 	else if (last + first == 1)
// 		ft_memcpy(str, s1 + first, ft_strlen(s1) - last);
// 	else
// 		ft_memcpy(str, s1, ft_strlen(s1));
// 	last = ft_strlen(str);
// 	str[last] = '\0';
// 	// printf("taille = %d\n", last);
// 	// printf("chaine = %s\n", str);
// 	return (str);
// }

// static size_t	ft_index(char const *s1, char const *set, char begin,
		// size_t i, size_t j)
// {
// 	size_t	count;
// 	size_t	prev_count;

// 	count = 0;
// 	prev_count = 0;
// 	while (s1[i])
// 	{
// 		while (set[j])
// 		{
// 			if (s1[i] == set[j])
// 			{
// 				count++;
// 				break ;
// 			}
// 			j++;
// 		}
// 		if (begin)
// 		{
// 			i++;
// 			j = i + 1;
// 		}
// 		else
// 		{
// 			i--;
// 			j = 0;
// 		}
// 		if (count == prev_count)
// 			break ;
// 	}
// 	return (count);
// }

static void	ft_index_p(char *s1, char *set, size_t *count)
{
	size_t	i;
	size_t	j;
	size_t	prev_count;

	i = 0;
	j = 0;
	prev_count = *count;
	while (s1[i])
	{
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				(*count)++;
				break ;
			}
			j++;
		}
		if (prev_count == *count)
			break ;
		prev_count = *count;
		i++;
		j = i + 1;
	}
}

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t	first;
// 	size_t	last;
// 	size_t	i;
// 	char	*new;

// 	first = ft_index(s1, set, 1, 0, 0);
// 	printf("%zu\n", first);
// 	last = ft_index(s1 + ft_strlen(s1) - 1, set, 0, ft_strlen(s1) - 1, 0);
// 	new = (char *)malloc((ft_strlen(s1) - first - last + 1) * sizeof(char));
// 	i = 0;
// 	if (!new)
// 		return (NULL);
// 	while (i < last)
// 	{
// 		new[i] = s1[i];
// 		i++;
// 	}
// 	new[i] = '\0';
// 	return (new);
// }

int	main(int ac, char **av)
{
	size_t	count;

	count = 0;
	(void) ac;
	ft_index_p(av[1], av[2], &count);
	// char s1[] = "aaaxxxtripouille";
	// char set[] = "ax";
	// size_t i = ft_strlen(set) - 1;
	// printf("%s\n", ft_strtrim("aaaxxxtripouille", "ax"));
	printf("%zu\n", count);
}