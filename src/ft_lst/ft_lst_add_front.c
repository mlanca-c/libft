/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_add_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 13:39:02 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/30 13:39:48 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

void	ft_lst_add_front(t_lst **lst, t_lst *new)
{
	t_lst	*tmp;

	tmp = *lst;
	if (tmp)
	{
		new->next = tmp;
		tmp->previous = new;
	}
	*lst = new;
}
