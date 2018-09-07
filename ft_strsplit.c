/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 17:37:56 by hchung            #+#    #+#             */
/*   Updated: 2018/09/03 02:32:14 by hchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		word_count(char const *s, char c)
{
	int len;

	len = 0;
	if (*s && *s != c)
	{
		len++;
		s++;
	}
	while (*s)
	{
		if (*s != c && s[-1] == c)
			len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	char			**list;

	if (!s)
		return (NULL);
	if (!(list = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1))))
		return (NULL);
	j = 0;
	while (*s != 0)
	{
		i = 0;
		while (s[i] != c && s[i] != 0)
			i++;
		if (i)
		{
			list[j++] = ft_strncpy(ft_strnew(i), s, i);
			s = &s[i];
		}
		else
			s++;
	}
	list[j] = NULL;
	return (list);
}
