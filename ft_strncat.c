/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 10:56:11 by hchung            #+#    #+#             */
/*   Updated: 2018/09/02 23:21:08 by hchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	size;
	size_t	i;

	size = ft_strlen(s1);
	i = 0;
	while (i < n && s2[i])
	{
		s1[i + size] = s2[i];
		i++;
	}
	s1[size + i] = '\0';
	return (s1);
}
