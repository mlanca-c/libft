/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_has_bigger.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 12:24:29 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/06/08 17:34:24 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

/*
** This function iterates a stack of integers and checks if its values are below
** a 'value'.
**
** @param	t_stack *stack	- stack to iterate.
** @param	int		value	- value to check if numbers are below or above.
**
** @return
** 		- The ft_stack_has_above() function returns 1 if there's a value in
** 		'stack' that is bigger or equal than 'value'; or 0 if it isn't.
*/
int	ft_stack_has_bigger(t_stack *stack, int value)
{
	while (stack)
	{
		if (stack->data > value)
			return (1);
		stack = stack->next;
	}
	return (0);
}
