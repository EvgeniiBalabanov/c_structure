/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstinsert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telron <telron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 01:11:24 by telron            #+#    #+#             */
/*   Updated: 2020/12/08 01:14:56 by telron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlist.h"

static void	ft_dlstinsert_lr(t_dlist *left, t_dlist *right)
{
	left->right = right;
	right->left = left;
}

void		ft_dlstinsert(t_dlist *left, t_dlist *center, t_dlist *right)
{
	ft_dlstinsert_lr(left, center);
	ft_dlstinsert_lr(center, right);
}