/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 19:18:31 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 22:33:27 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function adds an element to a list. 
** The ft_lstadd_back() function adds the element 'new' at the end of the list.
**
** @param	t_list 	**lst	- address of a pointer to the first link of a list.
** @param	t_list	*new	- address of a pointer to the element to be added to
**							the list.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = *lst;
	if (!tmp)
		*lst = new;
	else
	{
		while ((tmp)->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}
