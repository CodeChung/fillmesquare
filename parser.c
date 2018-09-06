/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 21:48:43 by hchung            #+#    #+#             */
/*   Updated: 2018/09/06 02:53:57 by hchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_error(void)
{
	ft_putstr("error :(");
	return (0);
}

int		ft_usage(void)
{
	ft_putstr("please sir, use only one arg");
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
		if (i = 20)
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

int		main(int argc, char **argv)
{
	int fd;

	if (argc != 2)
		return (ft_usage());
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (ft_error());
	if (!ft_parser(fd, 0, 0, 0, 0))
		return (ft_error());
}
