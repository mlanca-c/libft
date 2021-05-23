/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_max_value.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:25:10 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/20 11:29:11 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * This function iterates a stack 'stack_a' and returns its maximum value.
 *
 * @param	t_stack	*stack_a	- stack to iterate.
 *
 * @return
 * 		- integer type value that corresponds to the biggest number in
 * 		'stack_a'.
*/
int	ft_stack_max_value(t_stack *stack_a)
{
	int	max_value;

	max_value = stack_a->data;
	while (stack_a)
	{
		if (stack_a->data > max_value)
			max_value = stack_a->data;
		stack_a = stack_a->next;
	}
	return (max_value);
}
