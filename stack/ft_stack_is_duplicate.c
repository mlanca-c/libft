/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_is_duplicate.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:30:46 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/23 22:34:29 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function checks if 'stack' has any duplicated integers
** The ft_stack_is_duplicate() function iterates the stack and checks if any
** integer is duplicated.
**
** @param	t_stack	*stack	- stack to iterate from.
**
** @return
** 		- The ft_stack_is_duplicate() function returns 1 if it contains
**		duplicate integers; or it returns 0 if it doesn't.
*/
int	ft_stack_is_duplicate(t_stack *stack)
{
	t_stack	*temporary;
	while (stack)
	{
		temporary = stack->next;
		while (temporary)
		{
			if (stack->data == temporary->data)
				return (1);
			temporary = temporary->next;
		}
		stack = stack->next;
	}
	return (0);
}
