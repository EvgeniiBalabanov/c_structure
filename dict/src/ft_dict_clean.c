/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_clean.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telron <telron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 07:41:55 by telron            #+#    #+#             */
/*   Updated: 2020/12/17 15:54:31 by telron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

void	ft_dict_clean(t_dict *dict)
{
	char	**keys;

	keys = ft_dict_get_keys(dict);
	while (*keys)
	{
		ft_dict_del(dict, *keys);
		keys++;
	}
}
