/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrito <jbrito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:24:19 by jbrito            #+#    #+#             */
/*   Updated: 2026/11/03 10:24:19 by jbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*store;

	if (*lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		store = (*lst)-> next;
		ft_lstdelone((*lst), del);
		(*lst) = store;
	}
}

/*void	del_content(void *content)
{
	free(content);
}

int main(void)
{
	t_list *head = NULL;

	ft_lstadd_back(&head, ft_lstnew(ft_strdup("um")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("dois")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("dois")));

	printf("%u\n", ft_lstsize(head));
	ft_lstclear(&head, del_content);
	printf("%d\n", head == NULL);
	printf("%u\n", ft_lstsize(head));
}*/
