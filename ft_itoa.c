/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrito <jbrito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:24:08 by jbrito            #+#    #+#             */
/*   Updated: 2026/11/03 10:24:08 by jbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(long n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*dst;
	long	l;

	l = n;
	i = ft_numlen(l);
	dst = (char *)malloc(sizeof(char) * (i + 1));
	if (dst == NULL)
		return (NULL);
	dst[i] = '\0';
	if (l == 0)
		dst[0] = '0';
	if (l < 0)
		l *= -1;
	while (l > 0)
	{
		dst[--i] = (l % 10) + '0';
		l /= 10;
	}
	if (n < 0)
		dst[0] = '-';
	return (dst);
}
