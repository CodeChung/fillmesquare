/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tet_me_up.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 21:10:22 by hchung            #+#    #+#             */
/*   Updated: 2018/09/03 22:38:28 by hchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

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

int		**coordinate_transplant(int fd)
{
	int x;
	int y;
	int **tet_list;
	int tet;
	int tet_list_index;
	int tet_coord_index;		//remember we set x1 = [0], y1 = [1], x2 = [2], y2 = [3], x3 = [4] ... [7]
	char c;


	x = 0;
	y = 0;
	tet_list_index = 0;
	tet_coord_index = 0;
	tet_list = make_tet_list(fd);
	if (!(tet = ft_parser(fd, 0, 0, 0)))
		return (ft_error());
	while (read(fd, &c, 1) > 0)		//dont break the else ifs
	{
		if (c == '.')
			x++;
		else if (c == '#')
			tet_list[tet_list_index][tet_coord_index] = (tet_coord_index++ % 2 ? y : x++);
			tet_list[tet_list_index][tet_coord_index] = (tet_coord_index++ % 2 ? y : x);
		else if (c == '\n' && y < 4 && x == 4)
		{
			y++;
			x = 0;
		}
		else if (c == '\n' && (y == 4))
		{
			y = 0;
			x = 0;
			tet_list_index++;
			tet_coord_index = 0;
		}
	}
	if (!(ft_parser(int fd_for_the_fresh_tet_list, 0, 0, 0)))
		return (ft_error());
	else
		return (tet_list);
}
