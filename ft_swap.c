/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:46:33 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/19 13:23:12 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function swaps two integers with one another.
**
** @param	int	*a
** @param	int	*b
*/
void	ft_swap(int *a, int *b)
{
	int	temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}
