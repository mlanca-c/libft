/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 18:18:26 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 22:27:22 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function adds an element to a list. 
** The ft_lstadd_front() functionn adds the element 'new' at the beginning of
** the list.
**
** @param	t_list 	**lst	- address of a pointer to the first link of a list.
** @param	t_list	*new	- address of a pointer to the element to be added to
** 							the list.
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
