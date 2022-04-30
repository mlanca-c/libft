/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_add_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 13:35:47 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/30 14:30:16 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ds.h"

void	ft_lst_add_back(t_lst **lst, t_lst *new)
{
	t_lst	*last;

	if (!lst)
		*lst = new;
	else
	{
		last = ft_lst_last(*lst);
		new->previous = last;
		new->next = new;
	}
}
