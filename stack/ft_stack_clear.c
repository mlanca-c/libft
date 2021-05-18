/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 18:01:07 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/18 18:38:44 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_stack_clear() function deletes and frees the given element and every
** successor of that element, using the function ’del’ and free(). Finally, the
** pointer to the list must be set to null.
**
** @param	t_stack	**stack		- address of a pointer to an element.
*/
void	ft_stack_clear(t_stack **stack)
{
	if (!stack)
		return ;
	while (*stack)
		ft_stack_remove(stack);
}
