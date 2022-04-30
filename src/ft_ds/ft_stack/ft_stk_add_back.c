/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_add_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 14:59:10 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/30 15:07:00 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ds.h"

void	ft_stk_add_back(t_stk **stk, t_stk *new)
{
	t_stk	*last;

	if (!*stk)
	{
		*stk = new;
		return ;
	}
	last = ft_stk_last(*stk);
	new->previous = last;
	last->next = new;
}
