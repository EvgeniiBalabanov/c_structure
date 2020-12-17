/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_double.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telron <telron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 07:46:11 by telron            #+#    #+#             */
/*   Updated: 2020/12/17 15:56:48 by telron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

int			ft_dict_double(t_dict **dict)
{
	t_dict	*result;
	char	**keys;

	if (!(result = ft_dict_init_pro((*dict)->max_elem * 2)))
		return (-1);
	keys = ft_dict_get_keys(*dict);
	while (*keys)
	{
		if (ft_dict_add(&result, *keys, ft_dict_get(*dict, *keys)) == -1)
		{
			ft_dict_rem(result);
			return (-1);
		}
		keys++;
	}
	ft_dict_rem(*dict);
	*dict = result;
	return (0);
}
