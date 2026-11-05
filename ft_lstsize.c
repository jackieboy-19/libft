/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrito <jbrito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:24:35 by jbrito            #+#    #+#             */
/*   Updated: 2026/11/03 10:24:35 by jbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

unsigned int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst -> next;
	}
	return (i);
}

/*int main(void)
{
	t_list *head = NULL;
	printf("%u\n", ft_lstsize(head));

	ft_lstadd_back(&head, ft_lstnew(ft_strdup("um")));
	printf("%u\n", ft_lstsize(head));

	ft_lstadd_back(&head, ft_lstnew(ft_strdup("dois")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("tres")));
	printf("%u\n", ft_lstsize(head));
}*/
