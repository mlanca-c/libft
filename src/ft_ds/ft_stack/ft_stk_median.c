/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_median.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 15:38:28 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/30 15:41:01 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ds.h"

int	ft_stk_median(t_stk *stk)
{
	int		i;
	t_stk	*dup;

	i = ft_stk_size(stk) / 2;
	dup = ft_stk_dup(stk);
	if (!dup)
		return (INT_MIN);
	ft_stk_sort(&dup);
	if (!dup)
		return (INT_MIN);
	return (ft_stk_get(dup, i - 1));
}
