/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 22:13:10 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/06/01 12:32:00 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

/*
** This function sorts a stack by using the merge sort algorithm.
** According to the Wikipedia, merge sort is an efficient, general-purpose, and
** comparison-base sorting algorithm. (...) Merge sort is a divide and conquer
** algorithm.
** The steps for implementing Merge Sort are:
** 	1 - If the stack has zero or one elements, the program stops - cause there's
** 		no need for sorting.
** 	2 - Divide the stack in two stacks - first, and second - with
** 		ft_stack_split() function - 'first' gets the fist half and 'second' the
** 		last.
** 	3 - Sort both halves - 'first' and 'second' - using ft_stack_sort()
** 	4 - Merge the sorted halves - 'first' and 'second' - using ft_merge_sort(),
** 		and update the head.
*/
void	ft_stack_sort(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;

	first = *stack;
	if (!first || !first->next)
		return ;
	second = ft_stack_split(first);
	ft_stack_sort(&first);
	ft_stack_sort(&second);
	*stack = ft_merge_sort(first, second);
}

/*
** This function merges stack_a with stack_b in a sorted matter, and returns the
** head of the sorted stack reference. This method is recursive - 
** see https://en.wikipedia.org/wiki/Recursion_(computer_science).
** @line 77-83 		- if the first node of the first half is bigger than 
**					the first node of the second half, then ft_merge_sort() will
**					be called with the first half being incremented by one.
** @line 77-83 		- if the first node of the second half is bigger than 
**					the first node of the first half, then ft_merge_sort() will
**					be called with the second half being incremented by one.
**
** @param	t_stack	*first	- first half of 'stack'.
** @param	t_stack	*second	- second half of 'stack'.
**
** @return
** 		- the ft_merge_sort() function returns the head of the sorted 'stack'.
*/
t_stack	*ft_merge_sort(t_stack *first, t_stack *second)
{
	if (!first)
		return (second);
	if (!second)
		return (first);
	if (first->data < second->data)
	{
		first->next = ft_merge_sort(first->next, second);
		first->next->previous = first;
		first->previous = 0;
		return (first);
	}
	else
	{
		second->next = ft_merge_sort(first, second->next);
		second->next->previous = second;
		second->previous = 0;
		return (second);
	}
}

/*
** The function splits a stack 'head' into two halves - 'first' which is the
** first half - and 'second' which is the second half.
** The ft_stack_split() function simply iterates a stack, incrementing 'fast'
** variable and subsequently incrementing slow variable. By the time the program
** exits the while loop, the 'slow' stack will have the future head of the
** second half stack - 'second'.
**
** @param	t_stack	*head		- reference stack for the split - pointer to the
** 								head of the stack.
** @param	t_stack	*first		- stack where the first half of head should go.
** @param	t_stack	*second		- stack where the second half of head should go.
*/
t_stack	*ft_stack_split(t_stack	*head)
{
	t_stack	*slow;
	t_stack	*fast;
	t_stack	*temporary;

	slow = head;
	fast = head;
	while (fast->next && fast->next->next)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	temporary = slow->next;
	slow->next = 0;
	return (temporary);
}
