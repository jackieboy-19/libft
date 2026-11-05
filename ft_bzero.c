/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrito <jbrito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:23:47 by jbrito            #+#    #+#             */
/*   Updated: 2026/11/03 10:23:47 by jbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset (s, 0, n);
}

/*int main(void)
{
	unsigned char	z[5];
	int	i;

	i = 0;
	while (i < 5)
	{
		z[i] = 'X';
		i++;
	}
	ft_bzero(z, 3);
	i = 0;
	while (i < 5)
	{
		printf("%d ", z[i]);
		i++;
	}
	printf("\n");
}*/
