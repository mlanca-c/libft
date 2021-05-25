/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:03:19 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/25 18:02:59 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_lstclear() function deletes and frees the given element and every
** successor of that element, using the function ’del’ and free(3). Finally, the
** pointer to the list must be set to null.
**
** @param	t_list	**lst		- address of a pointer to an element.
** @param	void (*del)(void*)	- address of the function used to delete the
** 								content of the content.
*/
void	ft_lstclear(t_list **lst)
{
	if (!lst)
		return ;
	while (*lst)
		ft_lstremove(lst);
}
