/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 16:18:54 by hchung            #+#    #+#             */
/*   Updated: 2018/09/02 23:23:19 by hchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*l2;

	l2 = little;
	if (*little == '\0')
		return ((char *)big);
	while (len--)
	{
		if (*l2 == *big)
			l2++;
		else
		{
			big -= (l2 - little);
			len += (l2 - little);
			l2 = little;
		}
		big++;
		if (*l2 == '\0')
			return ((char *)(big - (l2 - little)));
		if (*big == '\0')
			break ;
	}
	return (NULL);
}
