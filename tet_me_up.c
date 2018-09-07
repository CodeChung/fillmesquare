/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tet_me_up.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 21:10:22 by hchung            #+#    #+#             */
/*   Updated: 2018/09/06 04:48:03 by hchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"
#include <stdio.h>

int		**make_tet_list(int fd)
{
	int		**tet_list;
	int		i;
	int		tet;

	tet = ft_parser(fd, 0, 0, 0);
	tet_list = (int **)malloc(sizeof(int*) * tet);
	i = 0;
	if (!tet_list)
		return (NULL);
	while (i < tet)
	{
		tet_list[i++] = (int *)malloc(sizeof(int) * 8);
	}
	return (tet_list);
}

int		**coordinate_transplant(int fd, int x, int y, int tet_list_i)
{
	int **tet_list;
	int tet;
	int tet_coord;
	char c;

	tet_coord = 0;
	tet_list = make_tet_list(fd);
	//if (!(tet = ft_parser(fd, 0, 0, 0)))
	//	return (NULL);
	while (read(fd, &c, 1) > 0)
	{
		if (c == '.')
			x++;
		else if (c == '#')
		{
			tet_list[tet_list_i][tet_coord] = (tet_coord % 2 ? y : x++);
			tet_coord++;
			tet_list[tet_list_i][tet_coord] = (tet_coord % 2 ? y : x);
			tet_coord++;
		}
		else if (c == '\n' && y < 4 && x == 4)
		{
			y++;
			x = 0;
		}
		else if (c == '\n' && y == 4)
		{
			y = 0;
			x = 0;
			tet_list_i++;
			tet_coord = 0;
		}
	}
	for (tet_coord=0;tet_coord < 8;tet_coord++)
	{
		printf("%d\n",tet_list[tet_list_i][tet_coord]);
	}
	return (tet_list);
}

int main(int argc, char **argv)
{
	int fd;

	fd = open(argv[1], O_RDONLY);
	coordinate_transplant(fd, 0, 0, 0);
	return (0);
}
