/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_in_tab_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 23:33:04 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 23:42:30 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_sort_in_tab() function takes a integer tab, and sorts it from smaller
** number in the first position to bigger number in the last position.
**
** @param	int	*tab	- integer tab to be sorted.
** @param	int	size	- length of the tab.
*/
void	ft_sort_in_tab(int *tab, int size)
{
	int	position;
	int	compare;
	int	temporary;

	position = 0;
	compare = 0;
	while (position < size)
	{
		while (compare < size)
		{
			if (tab[compare] >= tab[position])
			{
				temporary = tab[compare];
				tab[compare] = tab[position];
				tab[position] = temporary;
			}
			compare++;
		}
		compare = 0;
		position++;
	}
}
