/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 17:24:00 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/19 20:01:05 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function prints all data from the stack.
** The ft_stack_print() function iterates the stack, and prints with ft_putnbr()
** all the integers followed by a breakline.
**
** @param	t_stack	*stack	- stack to iterate from.
*/
void	ft_stack_print(t_stack *stack)
{
	t_stack	*temporary;

	if (!stack)
		return ;
	temporary = stack;
	while (temporary)
	{
		ft_putnbr_fd(temporary->data, 1);
		if (temporary->next)
			ft_putstr_fd(", ", 1);
		else
			ft_putstr_fd("\n", 1);
		temporary = temporary->next;
	}
}
