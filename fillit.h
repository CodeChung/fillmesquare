/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 21:46:30 by hchung            #+#    #+#             */
/*   Updated: 2018/09/04 21:17:17 by hchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ifndef blah blah blah
//remember that we use fd a lot in different functions but we forget to initialize, fix this down the road

#include <unistd.h>
#include <stdlib.h>
#include <otherstuffeventually.h>

int		ft_error();
int		ft_usage();
int		ft_parser(int fd, char c, int hash, int tet);

int		**make_tet_list(int fd);
int		**coordinate_transplant(int fd);

int		abs(int i);
int		verify_tet(int **tet_list);

int		**minimize_tet(int **tet_list, int tet);
