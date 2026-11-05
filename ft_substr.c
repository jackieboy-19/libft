/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrito <jbrito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:25:50 by jbrito            #+#    #+#             */
/*   Updated: 2026/11/03 10:25:50 by jbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*substr;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	substr = malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
			substr[j++] = s[i];
		i++;
	}
	substr[j] = '\0';
	return (substr);
}

/*int main(void)
{
	char	*s;
	char	*original = "abcdefghij";

	s = ft_substr(original, 2, 4);
	printf("[%s]\n", s);
	free(s);

	s = ft_substr(original, 8, 10);
	printf("[%s]\n", s);
	free(s);

	s = ft_substr(original, 20, 5);
	printf("[%s]\n", s);
	free(s);
}*/
