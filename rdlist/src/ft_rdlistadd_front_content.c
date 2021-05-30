/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rdlistadd_front_content.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telron <telron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 21:03:16 by telron            #+#    #+#             */
/*   Updated: 2021/05/30 21:05:06 by telron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"

t_dlist	*ft_rdlistadd_front_content(t_rdlist *rdlist, void *content)
{
	t_dlist	*result;

	result = ft_rdlistadd_left_content(rdlist, content);
	if (result)
		rdlist->begin = result;
	return (result);
}
