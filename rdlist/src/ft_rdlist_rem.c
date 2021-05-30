/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rdlist_rem.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telron <telron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 21:05:56 by telron            #+#    #+#             */
/*   Updated: 2021/05/30 21:12:41 by telron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"

void	ft_rdlist_rem(t_rdlist **rdlist, void (*ft_free)(void *))
{
	t_dlist	*dlist;
	t_dlist	*next;

	if (rdlist)
	{
		dlist = (*rdlist)->begin;
		while (rdlist->count--)
		{
			next = dlist->right;
			ft_dlstdelone(dlist, ft_free);
			dlist = next;
		}
		free(*rdlist);
	}
}
