/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 15:42:54 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/05/01 13:27:56 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ds.h"

void	ft_stk_print(t_stk *stk, char *btw)
{
	if (!stk)
		return ;
	if (stk->next)
		ft_printf("%d%s", stk->data, btw);
	else
		ft_printf("%d", stk->data);
	ft_stk_print(stk->next, btw);
}
