/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 17:59:22 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/18 18:15:28 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
	struct s_stack	*previous;
}	t_stack;

t_stack	*ft_stack_new(int data);
void	ft_stack_add_front(t_stack **stack, t_stack *new);
void	ft_stack_add_back(t_stack **stack, t_stack *new);
int		ft_stack_size(t_stack *stack);
t_stack	*ft_stack_last(t_stack *stack);
t_stack	*ft_stack_first(t_stack *stack);
void	ft_stack_remove(t_stack **stack);
void	ft_stack_print(t_stack *stack);
void	ft_stack_clear(t_stack **stack);

#endif
