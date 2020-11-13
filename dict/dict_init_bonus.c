/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_init_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telron <telron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 06:22:21 by telron            #+#    #+#             */
/*   Updated: 2020/11/13 23:32:51 by telron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

static t_dict		*ft_dict_init_pro(size_t max_elem)
{
	t_dict *result;

	result = (t_dict *)malloc(sizeof(t_dict));
	if (!result)
	{
		return ((t_dict *)0);
	}
	result->count_elem = 0;
	result->max_elem = max_elem;
	result->list = (t_dict_elem **)ft_calloc(\
		(result->max_elem + 1),\
		sizeof(t_dict_elem *));
	if (!result->list)
	{
		free(result);
		return ((t_dict *)0);
	}
	return (result);
}

static int			ft_dict_double(t_dict **dict)
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

static t_dict_elem	*ft_dict_elem_init(const char *key, void *content)
{
	t_dict_elem *result;

	result = (t_dict_elem *)malloc(sizeof(t_dict_elem));
	if (!result)
		return (0);
	result->key = key;
	result->content = content;
	result->next = 0;
	return (result);
}

t_dict				*ft_dict_init(void)
{
	return (ft_dict_init_pro(8));
}

int					ft_dict_add(t_dict **dict, const char *key, void *content)
{
	size_t		index;
	t_dict_elem *now;
	t_dict_elem *elem;

	if ((double)((*dict)->count_elem) > (double)((*dict)->max_elem) * 0.7)
		if (ft_dict_double(dict) == -1)
			return (-1);
	index = ft_dict_hash_function(key, (*dict)->max_elem);
	if (!(now = (*dict)->list[index]))
	{
		if (!(elem = ft_dict_elem_init(key, content)))
			return (-1);
		(*dict)->list[index] = elem;
	}
	else if ((elem = ft_dict_get_elem_by_key(now, key)))
	{
		elem->content = content;
		return (0);
	}
	else if (!(elem = ft_dict_elem_init(key, content)))
		return (-1);
	else
		ft_dict_elem_add_back(&now, elem);
	(*dict)->count_elem++;
	return (0);
}
