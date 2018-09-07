/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 22:02:37 by hchung            #+#    #+#             */
/*   Updated: 2018/09/02 23:13:25 by hchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*source;
	unsigned char	*dest;

	i = 0;
	source = (unsigned char *)src;
	dest = (unsigned char *)dst;
	while (i < n)
	{
		dest[i] = source[i];
		if (source[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
