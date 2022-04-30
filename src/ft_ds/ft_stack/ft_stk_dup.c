/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_dup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 15:14:08 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/30 15:17:15 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ds.h"

t_stk	*ft_stk_dup(t_stk *stk)
{
	t_stk	*dup;
	t_stk	*new;

	dup = NULL;
	while (stk)
	{
		new = ft_stk_new(stk->data);
		if (!new)
		{
			ft_stk_clear(&dup);
			return (NULL);
		}
		ft_stk_add_back(&dup, new);
		stk = stk->next;
	}
	return (dup);
}
