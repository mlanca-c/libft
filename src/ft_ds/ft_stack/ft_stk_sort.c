/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 15:46:19 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/30 16:09:27 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ds.h"

static t_stk	*ft_stk_merge_sort(t_stk *first, t_stk *second);
static t_stk	*ft_stk_split(t_stk *head);

void	ft_stk_sort(t_stk **stk)
{
	t_stk	*first;
	t_stk	*second;

	first = *stk;
	if (!first || !first->next)
		return ;
	second = ft_stk_split(first);
	ft_stk_sort(&first);
	ft_stk_sort(&second);
	*stk = ft_stk_merge_sort(first, second);
}

static t_stk	*ft_stk_merge_sort(t_stk *first, t_stk *second)
{
	if (!first)
		return (second);
	if (!second)
		return (first);
	if (first->data < second->data)
	{
		first->next = ft_stk_merge_sort(first->next, second);
		first->next->previous = first;
		first->previous = 0;
		return (first);
	}
	else
	{
		second->next = ft_stk_merge_sort(first, second->next);
		second->next->previous = second;
		second->previous = 0;
		return (second);
	}
}

static t_stk	*ft_stk_split(t_stk *head)
{
	t_stk	*slow;
	t_stk	*fast;
	t_stk	*tmp;

	slow = head;
	fast = head;
	while (fast->next && fast->next->next)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	tmp = slow->next;
	slow->next = 0;
	return (tmp);
}
