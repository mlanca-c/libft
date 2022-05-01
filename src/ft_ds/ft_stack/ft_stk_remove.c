/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_remove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 15:10:24 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/30 15:13:43 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ds.h"

void	ft_stk_remove(t_stk **stk)
{
	t_stk	*tmp;

	if (!stk)
		return ;
	tmp = *stk;
	*stk = tmp->next;
	tmp->next = NULL;
	free(tmp);
}