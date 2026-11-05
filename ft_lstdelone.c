/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrito <jbrito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:24:22 by jbrito            #+#    #+#             */
/*   Updated: 2026/11/03 10:24:22 by jbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	(*del)(lst -> content);
	free(lst);
}

/*void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *node;
	node = ft_lstnew(ft_strdup("ola"));

	printf("%s\n", (char *)node->content);
	ft_lstdelone(node, del_content);
}*/
