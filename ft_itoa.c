/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <sokaraku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:58:52 by sokaraku          #+#    #+#             */
/*   Updated: 2023/11/11 21:06:04 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_negative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nb;
	char	negative;

	negative = ft_negative(n);
	i = 1;
	nb = n;
	if (n < 0)
	{
		i++;
		nb *= -1;
	}
	while (n)
	{
		i++;
		n /= 10;
	}
	str = (char *)ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	while (i >= 0)
	{
		str[i--] = nb % 10 + '0';
		nb /= 10;
	}
	// if (str[0] == '0' && str[1])
	// 	str[0] = '-';
	if (negative == 1)
		return ()
	return (str);
}
