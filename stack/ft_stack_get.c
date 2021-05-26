/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_get.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:12:16 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/26 16:17:06 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

/*
** This function iterates 'stack' and returns its value at the position
** 'position' if it exists.
*/
int	ft_stack_get(t_stack *stack, int position)
{
	int	i;

	i = 0;
	while (stack)
	{
		if (i == position)
			return (stack->data);
		stack = stack->next;
		i++;
	}
	return (0);
}
