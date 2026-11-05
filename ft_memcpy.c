/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrito <jbrito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:24:42 by jbrito            #+#    #+#             */
/*   Updated: 2026/11/03 10:24:42 by jbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/*int main(void)
{
	int	src[4] = {10, 20, 30, 40};
	int	dst[4];
	int	i;

	ft_bzero(dst, 4 * sizeof(int));
	i = 0;
	while (i < 4)
	{
		printf("%d ", dst[i]);
		i++;
	}
	printf("\n");
	ft_memcpy(dst, src, 4 * sizeof(int));
	i = 0;
	while (i < 4)
	{
		printf("%d", dst[i]);
		i++;
	}
	printf("\n");
}*/
