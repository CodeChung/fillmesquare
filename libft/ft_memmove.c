/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 20:29:31 by hchung            #+#    #+#             */
/*   Updated: 2018/09/06 20:38:44 by hchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char*)dst;
	source = (unsigned char*)src;
	if (dest == source)
		return (dst);
	else if (source < dest)
	{
		dest += (len - 1);
		source += (len - 1);
		while (len--)
			*dest-- = *source--;
	}
	else
		while (len--)
			*dest++ = *source++;
	return (dst);
}
