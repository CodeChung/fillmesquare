/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimize_tet.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 17:02:16 by hchung            #+#    #+#             */
/*   Updated: 2018/09/04 17:51:58 by hchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

//this function just minimizes the x and y coordinates to make it easier for us to use! 

int		**minimize_tet(int	**tet_list, int tet)
{
	int x_min;
	int y_min;
	int i;
	int tet_coord;

	int i = 0;
	int tet_coord = 0;
	int	x_min = tet_list[i][tet_coord];
	int y_min = tet_list[i][tet_coord + 1];
	while (i < tet)
	{
		while (tet_coord < 8)
		{
			if (tet_coord % 2 == 0)
				x_min = (x_min <= tet_list[i][tet_coord]) ? x_min : tet_list[i][tet_coord++];
			else
				y_min = (y_min <= tet_list[i][tet_coord]) ? y_min : tet_list[i][tet_coord++];
		}
		tet_coord = 0;
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




