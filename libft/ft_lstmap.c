/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 23:42:55 by hchung            #+#    #+#             */
/*   Updated: 2018/09/05 23:46:26 by hchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*listerine;

	if (lst)
	{
		listerine = f(lst);
		listerine->next = ft_lstmap(lst->next, f);
		return (listerine);
	}
	return (NULL);
}
