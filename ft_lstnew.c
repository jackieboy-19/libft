/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrito <jbrito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:24:32 by jbrito            #+#    #+#             */
/*   Updated: 2026/11/03 10:24:32 by jbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	if (lst == NULL)
		return (NULL);
	lst -> content = content;
	lst -> next = NULL;
	return (lst);
}

/*int main(void)
{
	t_list *node;

	node = ft_lstnew(ft_strdup("ola"));
	if (node == NULL)
		return (1);
	printf("%s\n", (char *)node->content);
	printf("%d\n", node->next == NULL);
	free(node->content);
	free(node);
}*/
