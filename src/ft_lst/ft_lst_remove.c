/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_remove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 13:45:11 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/30 14:09:13 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

void	ft_lst_remove(t_lst **lst, void (*del)(void *))
{
	t_lst	*tmp;

	if (!lst)
		return ;
	tmp = *lst;
	*lst = tmp->next;
	tmp->next = NULL;
	(*del)(tmp->content);
	free(tmp);
}
