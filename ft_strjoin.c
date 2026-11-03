/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrito <jbrito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:25:20 by jbrito            #+#    #+#             */
/*   Updated: 2026/11/03 10:25:20 by jbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat_s;
	size_t	i;
	size_t	j;

	if (s1 == NULL || s2 == NULL)
		return (0);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	cat_s = malloc(sizeof(char) * (i + j + 1));
	if (cat_s == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		cat_s[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		cat_s[i++] = s2[j];
		j++;
	}
	cat_s[i] = '\0';
	return (cat_s);
}
