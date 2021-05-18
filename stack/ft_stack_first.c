/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_first.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:32:43 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/18 16:34:44 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_stack_first() funtion returns the first element of the list.
**
** @param	t_stack	*stack	- the beginning of the list.
**
** @return
** 		- the ft_stack_last() funtion returns the first element of the list.
*/
t_stack	*ft_stack_first(t_stack *stack)
{
	if (!stack)
		return (NULL);
	return (stack);
}
