/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrito <jbrito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:25:44 by jbrito            #+#    #+#             */
/*   Updated: 2026/11/03 10:25:44 by jbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static int	check_set(char const *set, char const c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;
	int		k;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (s1[i] != '\0' && check_set(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while ((j > i) && check_set(set, s1[j - 1]))
		j--;
	res = malloc(sizeof(char) * (j - i + 1));
	if (res == NULL)
		return (NULL);
	while (i < j)
	{
		res[k] = s1[i];
		i++;
		k++;
	}
	res[k] = 0;
	return (res);
}

/*int main(void)
{
	char *s;

	s = ft_strtrim("    ola mundo  ", " ");
	printf("[%s]\n", s);
	free(s);

	s = ft_strtrim("xxolaxxmundoxxx", "x");
	printf("[%s]\n", s);
	free(s);

	s = ft_strtrim("     ", " ");
	printf("[%s]\n", s);
	free(s);

	s = ft_strtrim("abcba", "ab");
	printf("[%s]\n", s);
	free(s);
} */
