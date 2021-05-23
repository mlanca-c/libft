/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_add_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:15:34 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/21 16:23:30 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function adds an element to a stack. 
** The ft_stack_add_front() function adds the element 'new' at the beginning of
** the stack.
**
** @param	t_stack **stack	- address of a pointer to the first link of a
**							stack.
** @param	t_stack	*new	- address of a pointer to the element to be added
**							to the stack.
*/
void	ft_stack_add_front(t_stack **stack, t_stack *new)
{
	t_stack	*temporary;

	temporary = *stack;
	if (temporary)
	{
		new->next = temporary;
		temporary->previous = new;
	}
	*stack = new;
}
