/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:09:31 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/18 18:29:41 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function creates a new element of a stack.
** The ft_stack_new() function allocates (with malloc()) and returns a new
** element.
** The variable 'data' is initialized with the value of the parameter
** 'data'. The variable 'next' is initialized to null, and so is the previous.
**
** @param	int	data	- data to create the new integer with.
**
** @return
** 		- The ft_stack_new() function returns the new element of the stack.
*/
t_stack	*ft_stack_new(int data)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack) * 1);
	if (!stack)
		return (NULL);
	stack->data = data;
	stack->next = NULL;
	stack->previous = NULL;
	return (stack);
}
