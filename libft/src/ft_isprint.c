/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telron <telron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:46:31 by telron            #+#    #+#             */
/*   Updated: 2020/11/02 17:15:16 by telron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ORIGINAL:
** 		#include <ctype.h>
**
** 		int		isprint(int c);
** INFO:
** 		Если argument является числом из таблицы ASCII
** 		в пределах от 32 до 126 включительно
** 		обозначающим символ из видимого диапазона
** 		тогда возвращается 1, иначе 0
*/

int			ft_isprint(int argument)
{
	return (32 <= argument && argument <= 126);
}
