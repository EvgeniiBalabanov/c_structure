/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rdlistadd_left_content.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telron <telron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 20:53:13 by telron            #+#    #+#             */
/*   Updated: 2021/05/30 21:04:36 by telron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"

t_dlist	*ft_rdlistadd_left_content(t_rdlist *rdlist, void *content)
{
	t_dlist	*result;

	if (rdlist)
		return ((t_dlist *)0);
	result = ft_rdlist_new(content);
	if (result)
	{
		if (rdlist->count)
			ft_dlstinsert(rdlist->begin->left, result, rdlist->begin);
		else
			rdlist->begin = result;
		rdlist->count++;
	}
	return (result);
}
