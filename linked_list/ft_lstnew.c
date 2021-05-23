/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 17:45:36 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 22:54:54 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function creates a new element of a list.
** The ft_lstnew() function allocates (with malloc()) and returns a new element.
** The variable 'content' is initialized with the value of the parameter
** 'content'. The variable 'next' is initialized to null.
**
** @param	void	*content	- content to create the new element with.
**
** @return
** 		- The ft_lstnew() function returns the new element of the list.
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list) * 1);
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
