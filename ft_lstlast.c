/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrito <jbrito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:24:27 by jbrito            #+#    #+#             */
/*   Updated: 2026/11/03 10:24:27 by jbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}

/*int main(void)
{
	t_list	*head = NULL;
	t_list	*last;

	printf("%d\n", ft_lstlast(head) == NULL);
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("um")));
	last = ft_lstlast(head);
	printf("%s\n", (char *)last->content);
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("dois")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("tres")));
	last = ft_lstlast(head);
	printf("%s\n", (char *)last->content);
	printf("%d\n", last->next == NULL);
}*/
