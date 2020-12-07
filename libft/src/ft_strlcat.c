/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telron <telron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 12:57:47 by telron            #+#    #+#             */
/*   Updated: 2020/11/02 13:03:54 by telron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t len;

	len = ft_strlen(dst);
	if (size > len)
		ft_strlcpy(dst + len, src, size - len);
	return ((len > size ? size : len) + ft_strlen(src));
}
