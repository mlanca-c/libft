/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 13:29:02 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/30 13:50:48 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LST_H
# define FT_LST_H

# include "ft_stdlib.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
	struct s_list	*previous;
}	t_lst;

t_lst	*ft_lst_new(void *content);
void	ft_lst_add_back(t_lst **lst, t_lst *new);
void	ft_lst_add_front(t_lst **lst, t_lst *new);
void	ft_lst_clear(t_lst **lst, void (*del)(void *));
t_lst	*ft_lst_last(t_lst *lst);
void	ft_lst_remove(t_lst **lst, void (*del)(void *));
int		ft_lst_size(t_lst *lst);
// void	ft_lst_print(t_lst *lst, char *btw);
// char	*ft_lst_tostr(t_lst *list, char *btw);

#endif /* FT_LST_H */
