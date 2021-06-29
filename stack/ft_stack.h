/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:16:19 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/06/02 14:05:09 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_H
# define FT_STACK_H

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
	struct s_stack	*previous;
}	t_stack;

/*
** Functions of ./stack
*/
t_stack	*ft_stack_new(int data);
void	ft_stack_add_front(t_stack **stack, t_stack *new);
void	ft_stack_add_back(t_stack **stack, t_stack *new);
int		ft_stack_size(t_stack *stack);
t_stack	*ft_stack_last(t_stack *stack);
t_stack	*ft_stack_first(t_stack *stack);
void	ft_stack_remove(t_stack **stack);
void	ft_stack_print(t_stack *stack);
void	ft_stack_clear(t_stack **stack);
int		ft_stack_is_duplicate(t_stack *stack);
int		ft_stack_is_sorted(t_stack *stack);
int		ft_stack_max_value(t_stack *stack_a);
int		ft_stack_min_value(t_stack *stack_a);
t_stack	*ft_stack_duplicate(t_stack *stack);
int		ft_stack_get(t_stack *stack, int position);
int		ft_stack_find(t_stack *stack, int value);
int		ft_stack_median(t_stack *stack);
int		ft_stack_has_bigger(t_stack *stack, int value);
/*
** ft_stack_sort.c Functions
*/
void	ft_stack_sort(t_stack **stack);
t_stack	*ft_merge_sort(t_stack *first, t_stack *second);
t_stack	*ft_stack_split(t_stack	*head);

#endif
