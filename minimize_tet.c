/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimize_tet.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 17:02:16 by hchung            #+#    #+#             */
/*   Updated: 2018/09/06 02:37:22 by hchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		find_min(int **tet_list, int tet, int i, int is_it_x)
{
	int low;
	int tet_coord;

	low = 69;
	tet_coord = is_it_x ? 0 : 1;
	while (tet_coord < 8)
	{
		low = (low <= tet_list[i][tet_coord]) ? low : tet_list[i][tet_coord];
		tet_coord += 2;
	}
	return (low);
}

int		**minimize_tet(int **tet_list, int tet, int i)
{
	int x_min;
	int y_min;
	int	tet_coord;

	tet_coord = 0;
	while (i < tet)
	{
		x_min = find_min(tet_list, tet, i, 1);
		y_min = find_min(tet_list, tet, i, 0);
		while (tet_coord < 8)
		{
			if (tet_coord % 2 == 0)
				tet_list[i][tet_coord] = tet_list[i][tet_coord++] - x_min;
			else
				tet_list[i][tet_coord] = tet_list[i][tet_coord++] - y_min;
		}
		tet_coord = 0;
		i++;
	}
	return (tet_list);
}
