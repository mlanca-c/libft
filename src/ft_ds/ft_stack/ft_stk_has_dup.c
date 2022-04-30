/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_has_dup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 15:30:30 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/30 16:12:36 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ds.h"

int	ft_stk_has_dup(t_stk *stk)
{
	t_stk	*sort;

	sort = ft_stk_dup(stk);
	ft_stk_sort(&sort);
	while (sort->next)
	{
		if (sort->data == sort->next->data)
		{
			sort = ft_stk_first(sort);
			ft_stk_clear(&sort);
			return (1);
		}
		sort = sort->next;
	}
	sort = ft_stk_first(sort);
	ft_stk_clear(&sort);
	return (0);
}
