/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rdlist_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telron <telron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 20:41:25 by telron            #+#    #+#             */
/*   Updated: 2021/05/30 20:56:01 by telron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"

t_dlist	*ft_rdlist_new(void *content)
{
	t_dlist	*result;

	result = (t_dlist *)ft_calloc(1, sizeof(t_dlist));
	if (result)
	{
		result->content = content;
		result->left = result;
		result->right = result;
	}
	return (result);
}
