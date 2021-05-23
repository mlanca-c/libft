/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_has_duplicate.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:30:46 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/23 21:07:02 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function checks if 'data' already exists in the stack.
** The ft_stack_is_duplicate() function iterates the stack and checks if 'data'
** already exists.
**
** @param	t_stack	*stack	- stack to iterate from.
** @param	int		data	- data to check if value exists.
**
** @return
** 		- The ft_stack_is_duplicate() function returns 1 if the value of 'data'
** 		already exists in the 'stack'; or it returns 0 if it doesn't exist.
*/
int	ft_stack_is_duplicate(t_stack *stack)
{
	t_stack	*cur_node;

	if (!stack)
		return (1);
	while (stack)
	{
		cur_node = stack->next;
		while (cur_node)
		{
			if (stack->data == cur_node->data)
				return (1);
			cur_node = cur_node->next;
		}
		stack = stack->next;
	}
	return (0);
}
