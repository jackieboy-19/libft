/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrito <jbrito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:24:30 by jbrito            #+#    #+#             */
/*   Updated: 2026/11/03 10:24:30 by jbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void*(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*content;

	new_lst = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (new_node == NULL)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst ->next;
	}
	return (new_lst);
}

/*void	*add_excl(void *content)
{
	return (ft_strjoin((char *) content, "!"));
}
void	del_content(void *content)
{
	free(content);
}

void	print_content(void	*content)
{
	printf("%s\n", (char *)content);
}

int main(void)
{
	t_list *head = NULL;
	t_list	*mapped;
	
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("um")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("dois")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("tres")));
	mapped = ft_lstmap(head, add_excl, del_content);

	ft_lstiter(head, print_content);
	ft_lstiter(mapped, print_content);

	ft_lstclear(&head, del_content);
	ft_lstclear(&mapped, del_content);
}*/
