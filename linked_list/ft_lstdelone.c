/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 19:37:30 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 22:38:56 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_lstdelone() function takes as a parameter an element and frees the
** memory of the element’s content using the function ’del’ given as a parameter
** and free the element. The memory of ’next’ must not be freed.
**
** @param	t_list	*lst		- the element to free.
** @param	void (*del)(void *)	- the address of the function used to delete the
** 								content.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}
