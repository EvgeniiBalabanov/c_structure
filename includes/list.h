/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telron <telron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 22:52:24 by telron            #+#    #+#             */
/*   Updated: 2020/11/13 23:35:17 by telron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

/*
** Structure
*/

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*
** Создать новый этемент t_list с content
*/
t_list				*ft_lstnew(void *content);

/*
** Добавить элемент new, в начало связного списка lst
*/
void				ft_lstadd_front(t_list **lst, t_list *new);

/*
** Посчитать количество элементов в списке lst
*/
int					ft_lstsize(t_list *lst);

/*
** Достать последний элемент связного списка lst
*/
t_list				*ft_lstlast(t_list *lst);

/*
** Добавить элемент new в конец связного списка lst
*/
void				ft_lstadd_back(t_list **lst, t_list *new);

/*
** Удалить элемент lst с помощью функции del
*/
void				ft_lstdelone(t_list *lst, void (*del)(void*));

/*
** Удалить связный список lst со всеми элементами, через функцию del
*/
void				ft_lstclear(t_list **lst, void (*del)(void*));

/*
** Применить Функцию f ко всем элементам списка lst
*/
void				ft_lstiter(t_list *lst, void (*f)(void *));

/*
** Создать новый связный список из списка lst,
** применив к каждому элементу функцию f
** в случае неудачи, применяет функцию del
*/
t_list				*ft_lstmap(\
						t_list *lst,\
						void *(*f)(void *),\
						void (*del)(void *));

#endif