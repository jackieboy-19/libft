/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrito <jbrito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:25:23 by jbrito            #+#    #+#             */
/*   Updated: 2026/11/03 10:25:23 by jbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	while (dst[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0' && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*int	main(void)
{
	char	buf[10];
	size_t r;

	ft_strlcpy(buf, "ola", 10);
	r = ft_strlcat(buf, "mundo", 10);
	printf("String: %s, tamanho que tentou criar: %ld\n", buf, r);

	ft_strlcpy(buf, "olamundo", 10);
	r = ft_strlcat(buf, "!!!!!", 10);
	printf("String: %s, tamanho que tentou criar: %ld\n", buf, r);

	ft_strlcpy(buf, "ola", 10);
	r = ft_strlcat(buf, "mundo", 2);
	printf("String: %s, tamanho que tentou criar: %ld\n", buf, r);
}*/
