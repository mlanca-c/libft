/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 15:36:19 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/30 15:38:11 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ds.h"

int	ft_stk_max(t_stk *stk)
{
	int	max;

	if (!stk)
		return (INT_MIN);
	max = stk->data;
	while (stk)
	{
		if (stk->data > max)
			max = stk->data;
		stk = stk->next;
	}
	return (max);
}
