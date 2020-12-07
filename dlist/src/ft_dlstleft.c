/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstleft.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telron <telron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 23:15:23 by telron            #+#    #+#             */
/*   Updated: 2020/12/07 23:15:51 by telron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlist.h"

t_dlist	*ft_dlstleft(t_dlist *dlst)
{
	while (dlst && dlst->left)
		dlst = dlst->left;
	return (dlst);
}