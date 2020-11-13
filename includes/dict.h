/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telron <telron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 23:33:04 by telron            #+#    #+#             */
/*   Updated: 2020/11/13 23:36:28 by telron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
# define DICT_H

/*
** Structure
*/

typedef struct		s_dict_elem
{
	const char		*key;
	void			*content;
	void			*next;
}					t_dict_elem;

typedef struct		s_dict
{
	t_dict_elem		**list;
	size_t			count_elem;
	size_t			max_elem;
}					t_dict;


t_dict				*ft_dict_init(void);
int					ft_dict_add(t_dict **dict,\
									const char *key,\
									void *content);
void				*ft_dict_get(t_dict *dict, const char *key);
char				**ft_dict_get_keys(t_dict *dict);
void				ft_dict_del(t_dict *dict, const char *key);
void				ft_dict_rem(t_dict *dict);
void				ft_dict_clean(t_dict *dict);

#endif