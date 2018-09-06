/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 21:46:30 by hchung            #+#    #+#             */
/*   Updated: 2018/09/06 02:39:49 by hchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "libft.h"

int		ft_error();
int		ft_usage();
int		ft_parser(int fd, char c, int hash, int tet);

int		**make_tet_list(int fd);
int		**coordinate_transplant(int fd);

int		abs(int i);
int		verify_tet(int **tet_list);

int		find_min(int **tet_list, int tet, int i, int is_it_x);
int		**minimize_tet(int **tet_list, int tet, int i);
#endif
