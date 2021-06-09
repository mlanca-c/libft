/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_median.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:45:21 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/06/09 14:45:54 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

/*
** This function returns the stack's median value - the value at the center of
** the stack when this one is sorted.
**
** @param	t_stack *stack	- this stack will be duplicated and that duplication
** 							will be sorted to find the median value.
**
** @return
** 		- The ft_stack_median() function returns the median value of 'stack'.
*/
int	ft_stack_median(t_stack *stack)
{
	t_stack	*duplicate;
	int		half;

	half = ft_stack_size(stack) / 2;
	duplicate = ft_stack_duplicate(stack);
	ft_stack_sort(&duplicate);
	return (ft_stack_get(duplicate, half - 1));
}
