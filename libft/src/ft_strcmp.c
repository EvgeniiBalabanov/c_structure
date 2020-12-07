/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telron <telron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 08:05:34 by telron            #+#    #+#             */
/*   Updated: 2020/12/07 08:05:59 by telron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t first, size_t second)
{
	return (first > second ? second : first);
}

int				ft_strcmp(const char *str1, const char *str2)
{
	return (ft_memcmp(str1, str2, ft_min(ft_strlen(str1), ft_strlen(str2))));
}
