/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rdlist_rotate_left.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telron <telron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 20:52:39 by telron            #+#    #+#             */
/*   Updated: 2021/05/30 20:54:13 by telron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"

void	ft_rdlist_rotate_left(t_rdlist *rdlist)
{
	if (rdlist && rdlist->count > 1)
		rdlist->begin = rdlist->begin->left;
}