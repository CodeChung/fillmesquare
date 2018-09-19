/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 19:16:08 by hchung            #+#    #+#             */
/*   Updated: 2018/09/02 23:24:03 by hchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*alloc;
	size_t	length;

	if (s == NULL)
		return (NULL);
	alloc = NULL;
	length = ft_strlen(s);
	if ((start + len) <= length)
	{
		alloc = (char *)malloc(sizeof(char) * (len + 1));
		if (alloc)
		{
			alloc = ft_strncpy(alloc, s + start, len);
			alloc[len] = '\0';
		}
	}
	return (alloc);
}
