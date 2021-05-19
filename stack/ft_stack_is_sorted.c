/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_is_sorted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:43:20 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/19 17:25:31 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function checks if a stack is sorted.
** The ft_stack_is_sorted() function iterates a stack, and checks if the stack
** is sorted from smaller to bigger values.
**
** @param	t_stack	*stack	- stack to iterate from.
**
** @return
** 		- The ft_stack_is_sorted() function returns 1 if the 'stack' is sorted;
** 		or 0 if it isn't.
*/
int	ft_stack_is_sorted(t_stack *stack)
{
	while (stack->next)
	{
		if (stack->data > stack->next->data)
			return (0);
		stack = stack->next;
	}
	return (1);
}
