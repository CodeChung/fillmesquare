/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 03:43:07 by hchung            #+#    #+#             */
/*   Updated: 2018/09/06 19:31:03 by hchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int		main(int argc, char **argv)
{
	int fd;
	int **tet_list;
	int tet;

	if (argc != 2)
		return (ft_usage());
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (ft_error());
	if (!(tet = ft_parser(fd, 0, 0, 0)))
		return (ft_error());
	tet_list = coordinate_transplant(fd, 0, 0, 0);
	tet_list = minimize_tet(tet_list, tet, 0);
	verify_tet(tet_list, tet);	
	return (0);
}
