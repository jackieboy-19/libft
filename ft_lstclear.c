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
