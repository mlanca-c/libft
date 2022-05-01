/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 14:29:49 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/05/01 13:36:31 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ds.h"

t_stk	*ft_stk_new(int data)
{
	t_stk	*stk;

	if (!data)
		return (NULL);
	stk = ft_calloc(sizeof(t_stk), 1);
	if (!stk)
		return (NULL);
	stk->data = data;
	return (stk);
}
