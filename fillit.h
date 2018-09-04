/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 21:46:30 by hchung            #+#    #+#             */
/*   Updated: 2018/09/03 22:38:39 by hchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ifndef blah blah blah

#include <unistd.h>
#include <stdlib.h>
#include <otherstuffeventually.h>

int		ft_error();
int		ft_usage();
int		ft_parser(int fd, char c, int hash, int tet);

int		**make_tet_list(int fd);
int		**coordinate_transplant(int fd);
