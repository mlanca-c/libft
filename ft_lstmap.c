/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:06:16 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/02/19 20:36:53 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = ft_lstnew((*f)(lst->content));
	new = temp;
	while (lst->next)
	{
		lst = lst->next;
		if (!(temp->next = ft_lstnew((*f)(lst->content))))
		{
			ft_lstdelone(temp->next, del);
			return (NULL);
		}
		temp = temp->next;
	}
	return (new);
}
