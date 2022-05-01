/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 13:43:42 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/05/01 13:54:24 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ds.h"

void	ft_lst_print(t_lst *lst, char *msg)
{
	if (!lst)
		return ;
	ft_printf(msg, lst->content);
	ft_lst_print(lst->next, msg);
}
