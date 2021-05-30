/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rdlist_rotate_right.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telron <telron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 20:53:10 by telron            #+#    #+#             */
/*   Updated: 2021/05/30 20:54:36 by telron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"

void	ft_rdlist_rotate_right(t_rdlist *rdlist)
{
	if (rdlist && rdlist->count > 1)
		rdlist->begin = rdlist->begin->right;
}