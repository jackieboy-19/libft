/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrito <jbrito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:24:37 by jbrito            #+#    #+#             */
/*   Updated: 2026/11/03 10:24:37 by jbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char) c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}

/*int main(void)
{
	char	buf[] = "abcdef";
	void	*ptr;

	ptr = ft_memchr(buf, 'd', 6);
	if (ptr != NULL)
		printf("Offset: %ld\n", (char *)ptr - buf);
	else
		printf ("Not found");
	
	ptr = ft_memchr(buf, 'z', 6);
	if (ptr != NULL)
		printf("Offset: %ld\n", (char*) ptr - buf);
	else
		printf("Not found");
}*/
