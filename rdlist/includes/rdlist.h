/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rdlist.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telron <telron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 20:34:06 by telron            #+#    #+#             */
/*   Updated: 2021/05/30 20:55:38 by telron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RDLIST_H
# define RDLIST_H

# include <stddef.h>
# include "libft.h"
# include "dlist.h"

typedef struct s_rdlist
{
	t_dlist		*begin;
	size_t		count;
}				t_rdlist;

#endif