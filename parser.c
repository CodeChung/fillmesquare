/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 21:48:43 by hchung            #+#    #+#             */
/*   Updated: 2018/09/06 04:14:43 by hchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int		ft_error(void)
{
	write (1, "y", 1);
	return (0);
}

int		ft_usage(void)
{
	write(1, "n", 1);
	return (0);
}

int		ft_parser(int fd, char c, int hash, int tet)
{
	int i;

	i = 0;
	while (read(fd, &c, 1) > 0)
	{
		if (++i % 5 == 0)
			hash = (c != '\n') ? (hash + 1) : hash;
		else if (i % 5 != 0)
		{
			if (c != '.' && c != '#')
				return (ft_error());
			hash = (c == '#') ? (hash + 1) : hash;
		}
		if (i == 20)
		{
			if (hash != 4)
				return (ft_error());
			i = -1;
			hash = 0;
			tet++;
		}
	}
	return ((i != -1 || tet > 26) ? ft_error() : tet);
}
