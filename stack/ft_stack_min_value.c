/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_min_value.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:29:25 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/20 11:31:40 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * This function iterates a stack 'stack_a' and returns its minimum value.
 *
 * @param	t_stack	*stack_a	- stack to iterate.
 *
 * @return
 * 		- integer type value that corresponds to the smallest number in
 * 		'stack_a'.
*/
int	ft_stack_min_value(t_stack *stack_a)
{
	int	min_value;

	min_value = stack_a->data;
	while (stack_a)
	{
		if (stack_a->data < min_value)
			min_value = stack_a->data;
		stack_a = stack_a->next;
	}
	return (min_value);
}
