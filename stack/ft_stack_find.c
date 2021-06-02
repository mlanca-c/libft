/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_find.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 14:05:23 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/06/02 14:16:20 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

/*
** This function iterates 'stack' and returns the index of value in 'stack', if
** such value exists.
**
** @param	t_stack	*stack	- stack of integers to iterate.
**
** @param	int		value	- value top search in 'stack' and return position.
** 
** @return
** 		- the ft_stack_find() function returns the value's index in 'stack' from
** 		0 to ft_stack_size(stack) - 1; if there's no such 'value' in stack, then
** 		the function returns INT_MIN.
*/
int	ft_stack_find(t_stack *stack, int value)
{
	int	i;

	i = 0;
	while (stack)
	{
		if (value == stack->data)
			return (i);
		stack = stack->next;
		i++;
	}
	return (-2147483648);
}
