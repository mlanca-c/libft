/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 11:44:56 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/25 11:50:27 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function prints all data from a list.
** The ft_lstprint() function iterates the list, and prints with ft_putstr_fd()
** all the integers followed by a breakline.
**
** @param	t_stack	*stack	- stack to iterate from.
*/
void	ft_lstprint(t_list *lst)
{
	t_list	*temporary;

	if (!lst)
		return ;
	temporary = lst;
	while (temporary)
	{
		ft_putstr_fd(temporary->content, 1);
		if (temporary->next)
			ft_putstr_fd(", ", 1);
		else
			ft_putstr_fd("\n", 1);
		temporary = temporary->next;
	}
}
