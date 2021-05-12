/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_even_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 23:02:57 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 23:11:53 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_is_even() function checks if a given int 'j' is even.
**
** @param	int	j	- given number.
**
** @return
** 		- The ft_is_even() function returns 1 if the given int 'j' is an even
** 		number, or 0 if 'j' is odd.
*/
int	ft_is_even(int j)
{
	if (j % 2 == 0)
		return (1);
	return (0);
}
