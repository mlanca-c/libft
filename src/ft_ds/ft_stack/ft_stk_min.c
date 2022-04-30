/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 15:41:18 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/30 15:42:28 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ds.h"

int	ft_stk_min(t_stk *stk)
{
	int	min;

	if (!stk)
		return (INT_MIN);
	min = stk->data;
	while (stk)
	{
		if (stk->data < min)
			min = stk->data;
		stk = stk->next;
	}
	return (min);
}
