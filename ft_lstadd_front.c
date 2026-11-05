/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrito <jbrito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:24:16 by jbrito            #+#    #+#             */
/*   Updated: 2026/11/03 10:24:16 by jbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new -> next = *lst;
	*lst = new;
}

/*int main(void)
{
	t_list *head = NULL;
	t_list *current;

	ft_lstadd_back(&head, ft_lstnew(ft_strdup("dois")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("tres")));	
	ft_lstadd_front(&head, ft_lstnew(ft_strdup("um")));
	current = head;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
}*/
