/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 15:42:54 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/30 16:08:47 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ds.h"

void	ft_stk_print(t_stk *stk, char *btw)
{
	while (stk)
	{
		if (stk->next)
			ft_printf("%d%s", stk->data, btw);
		else
			ft_printf("%d", stk->data);
		stk = stk->next;
	}
}
