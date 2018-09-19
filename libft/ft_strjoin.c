/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 19:55:23 by hchung            #+#    #+#             */
/*   Updated: 2018/09/02 23:20:08 by hchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		count;

	new = NULL;
	if (s1 && s2)
	{
		count = ft_strlen(s1) + ft_strlen(s2);
		new = (char *)malloc(sizeof(char) * (count + 1));
		if (new)
		{
			ft_strcpy(new, s1);
			ft_strcat(new, s2);
		}
	}
	return (new);
}
