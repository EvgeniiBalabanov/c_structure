/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_utils_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telron <telron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 06:26:45 by telron            #+#    #+#             */
/*   Updated: 2020/11/13 23:32:35 by telron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

static size_t		ft_min(size_t first, size_t second)
{
	return (first > second ? second : first);
}

static int			ft_strcmp(const char *str1, const char *str2)
{
	return (ft_memcmp(str1, str2, ft_min(ft_strlen(str1), ft_strlen(str2))));
}

static size_t		ft_dict_hash_function(const char *key, size_t max_elem)
{
	size_t hash;
	size_t counter;

	hash = 0;
	counter = 0;
	while (key[counter])
	{
		hash += hash * 23 + (unsigned char)(key[counter]);
		counter++;
	}
	return (hash % max_elem);
}

static t_dict_elem	*ft_dict_elem_last(t_dict_elem *elem)
{
	while (elem->next)
		elem = elem->next;
	return (elem);
}

static void			ft_dict_elem_add_back(t_dict_elem **elem, t_dict_elem *new)
{
	if (*elem)
		ft_dict_elem_last(*elem)->next = new;
	*elem = new;
}
