/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrito <jbrito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:23:49 by jbrito            #+#    #+#             */
/*   Updated: 2026/11/03 10:23:49 by jbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	*ptr;

	if (count != 0 && size > SIZE_MAX / count)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero (ptr, count * size);
	return (ptr);
}

/*int main(void)
{
	int	*p;
	int	i;

	p = ft_calloc(5, sizeof(int));
	if (p == NULL)
		return (1);
	i = 0;
	while (i < 5)
	{
		printf("%d" ,p[i]);
		i++;
	}
	free(p);

	p = ft_calloc(SIZE_MAX, 2);
	printf ("%p", p);
}*/
