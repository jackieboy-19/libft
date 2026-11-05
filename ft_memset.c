/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrito <jbrito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:24:48 by jbrito            #+#    #+#             */
/*   Updated: 2026/11/03 10:24:48 by jbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n > 0)
	{
		ptr[n - 1] = c;
		n--;
	}
	return (s);
}

/*int	main(void)
{
	char	buf[10];
	int		i;
	int		arr[4];

	i = 0;
	while (i < 9)
	{
		buf[i] = '.';
		i++;
	}
	buf[9] = '\0';
	printf("antes: %s\n", buf);
	ft_memset(buf, 'A', 5);
	printf("depois: %s\n", buf);
	ft_memset(arr, 1, 4 * sizeof(int));
	printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
}*/
