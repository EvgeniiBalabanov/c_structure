/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rdlist_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telron <telron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 20:45:31 by telron            #+#    #+#             */
/*   Updated: 2021/05/30 20:45:39 by telron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"

t_rdlist	*ft_rdlist_init(void)
{
	t_rdlist	*result;

	result = (t_rdlist *)ft_calloc(1, sizeof(t_rdlist));
	return (result);
}
