/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_add_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 15:05:41 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/30 15:09:03 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ds.h"

void	ft_stk_add_front(t_stk **stk, t_stk *new)
{
	t_stk	*tmp;

	tmp = *stk;
	if (tmp)
	{
		new->next = tmp;
		tmp->previous = new;
	}
	*stk = new;
}
