/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_find.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 15:24:24 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/30 15:26:17 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ds.h"

int	ft_stk_find(t_stk *stk, int val)
{
	int	i;

	i = 0;
	while (stk)
	{
		if (stk->data == val)
			return (i);
		stk = stk->next;
		i++;
	}
	return (-1);
}