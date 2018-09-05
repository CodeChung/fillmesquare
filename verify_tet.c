/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_tet.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 12:13:02 by hchung            #+#    #+#             */
/*   Updated: 2018/09/04 17:33:52 by hchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		abs(int i)
{
	if (i < 0)
		return (i * -1);
	else
		return (i);
}

int		verify_tet(int **tet_list, int tet)
{
	int i;
	int	valid_tet;
	int tet_coord;

	i = 0;
	valid_tet = 0;
	tet_coord = 0;
	while (i < tet)
	{
		while (tet_coord < 8)
		{
			if (tet_coord % 2 == 0)
			{
				
}
