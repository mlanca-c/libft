/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 13:28:46 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/05/01 13:36:12 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ds.h"

t_lst	*ft_lst_new(void *content)
{
	t_lst	*lst;

	if (!content)
		return (NULL);
	lst = ft_calloc(sizeof(t_lst), 1);
	if (!lst)
		return (NULL);
	lst->content = content;
	return (lst);
}
