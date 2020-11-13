/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_delete_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telron <telron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 06:24:19 by telron            #+#    #+#             */
/*   Updated: 2020/11/13 23:32:46 by telron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

void	ft_dict_del(t_dict *dict, const char *key)
{
	t_dict_elem *elem;
	t_dict_elem *last;
	size_t		index;

	index = ft_dict_hash_function(key, dict->max_elem);
	elem = dict->list[index];
	last = 0;
	while (elem)
	{
		if (!ft_strcmp(elem->key, key))
		{
			if (last)
				last->next = elem->next;
			else
				dict->list[index] = elem->next;
			free(elem);
			dict->count_elem--;
			return ;
		}
		last = elem;
		elem = elem->next;
	}
}

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

void	ft_dict_rem(t_dict *dict)
{
	ft_dict_clean(dict);
	free(dict);
}
