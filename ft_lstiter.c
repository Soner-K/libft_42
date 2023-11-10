/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <sokaraku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:58:49 by sokaraku          #+#    #+#             */
/*   Updated: 2023/11/10 15:45:42 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*void	ft_print(void *content)
{
	printf("%s\n", (char *) content);
}
int main()
{
	t_list	*test;
	t_list	*test_2;
	t_list	*test_3;

	test = ft_lstnew("test");
	test_2 = ft_lstnew("test2");
	test_3 = ft_lstnew("test_3");

	ft_lstadd_front(&test, test_2);
	ft_lstadd_front(&test_2, test_3);

	ft_lstiter(test_3, ft_print);



}*/