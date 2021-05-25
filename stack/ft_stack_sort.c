/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 22:13:10 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/26 00:26:40 by mlanca-c         ###   ########.fr       */
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
** 	2 - Divide the stack in two stacks - stack_a, and stack_b - with
** 		ft_stack_split() function - stack_a gets the fist half and stack_b the
** 		last.
** 	3 - Sort both halves - stack_a and stack_b - using ft_stack_sort()
** 	4 - Merge the sorted halves - stack_a and stack_b - using ft_merge_sort(),
** 		and update the head.
**
** To those less familiarized with the 'head' term I will refer to it when
** talking about the first element of the stack.
*/
void	ft_stack_sort(t_stack **stack)
{
	t_stack	*head;
	t_stack	*stack_a;
	t_stack	*stack_b;

	head = *stack;
	if (!head || !head->next)
		return ;
	ft_stack_split(head, &stack_a, &stack_b);
	ft_stack_sort(&stack_a);
	ft_stack_sort(&stack_b);
	head = ft_merge_sort(stack_a, stack_b);
}

/*
** This function merges stack_a with stack_b in a sorted matter, and returns the
** head of the sorted stack reference. This method is recursive - 
** see https://en.wikipedia.org/wiki/Recursion_(computer_science).
** @line 76-80 		- if the first node of the first half is bigger than the
** 					first node of the second half, then the first node of the
** 					first half will be put in 'result'. And ft_merge_sort() will
** 					be called with the first half being incremented by one.
** @line 81-85 		- if the first node of the second half is bigger than the
** 					first node of the first half, then the first node of the
** 					second half will be put in 'result'. And ft_merge_sort()
** 					will be called with the second half being incremented by
** 					one.
**
** @param	t_stack	*stack_a	- first half of 'stack'.
** @param	t_stack	*stack_b	- second half of 'stack'.
**
** @return
** 		- the ft_merge_sort() function returns the head of the sorted 'stack'.
*/
t_stack	*ft_merge_sort(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*result;

	if (!stack_a)
		return (stack_b);
	if (!stack_b)
		return (stack_a);
	if (stack_a->data <= stack_b->data)
	{
		result = stack_a;
		result->next = ft_merge_sort(stack_a->next, stack_b);
	}
	else
	{
		result = stack_b;
		result->next = ft_merge_sort(stack_a, stack_b->next);
	}
	return (result);
}

/*
** The function splits a stack 'head' into two halves - stack_a which is the
** first half - and stack_b - which is the second half.
** The ft_stack_split() function simply iterates a stack, incrementing 'fast'
** variable and subsequently incrementing slow variable. By the time the program
** exits the while loop, the 'slow' stack will have the future head of the
** second half stack - stack_b.
**
** @param	t_stack	*head		- reference stack for the split - pointer to the
** 								head of the stack.
** @param	t_stack	*stack_a	- stack where the first half of head should go.
** @param	t_stack	*stack_b	- stack where the second half of head should go.
*/
void	ft_stack_split(t_stack *head, t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*slow;
	t_stack	*fast;

	slow = head;
	fast = head->next;
	while (fast)
	{
		fast = fast->next;
		if (fast->next)
		{
			slow = slow->next;
			fast = fast->next;
		}
	}
	*stack_a = head;
	*stack_b = slow;
	slow->next = 0;
	head->previous = 0;
}
