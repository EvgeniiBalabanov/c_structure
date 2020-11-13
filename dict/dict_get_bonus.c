/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_get_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telron <telron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 06:31:26 by telron            #+#    #+#             */
/*   Updated: 2020/11/13 23:32:41 by telron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

static t_dict_elem	*ft_dict_get_elem_by_key(t_dict_elem *elem,\
												const char *key)
{
	while (elem)
	{
		if (!ft_strcmp(elem->key, key))
			return (elem);
		elem = elem->next;
	}
	return (0);
}

char				**ft_dict_get_keys(t_dict *dict)
{
	char		**keys;
	size_t		counter;
	size_t		counter_keys;
	t_dict_elem	*buf;

	if (!(keys = (char **)ft_calloc(dict->count_elem + 1, sizeof(char *))))
		return ((char **)0);
	counter = 0;
	counter_keys = 0;
	while (counter < dict->max_elem)
	{
		if (dict->list[counter])
		{
			buf = dict->list[counter];
			while (buf)
			{
				keys[counter_keys++] = (char *)buf->key;
				buf = buf->next;
			}
		}
		counter++;
	}
	keys[counter_keys] = 0;
	return (keys);
}

void				*ft_dict_get(t_dict *dict, const char *key)
{
	size_t		index;
	t_dict_elem	*elem;

	index = ft_dict_hash_function(key, dict->max_elem);
	elem = ft_dict_get_elem_by_key(((dict->list)[index]), key);
	return (elem ? elem->content : 0);
}
