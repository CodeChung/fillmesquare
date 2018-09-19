/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 22:34:30 by hchung            #+#    #+#             */
/*   Updated: 2018/09/06 20:55:31 by hchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*memmy;

	i = 0;
	memmy = (unsigned char*)b;
	while (i < (int)len)
	{
		memmy[i] = (unsigned char)c;
		i++;
	}
	return ((void*)memmy);
}
