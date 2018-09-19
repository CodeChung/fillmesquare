/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 14:41:58 by hchung            #+#    #+#             */
/*   Updated: 2018/08/29 19:24:20 by hchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int pos;
	int len;

	i = 0;
	pos = 0;
	len = 0;
	while (little[len])
		len++;
	if (len == 0)
		return ((char *)big);
	while (big[i])
	{
		while (little[pos] == big[i + pos])
		{
			if (pos == len - 1)
				return ((char *)big + i);
			pos++;
		}
		pos = 0;
		i++;
	}
	return (0);
}
