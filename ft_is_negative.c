/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 23:26:27 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 23:31:46 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_is_negative() function checks if a integer 'n' is negative.
**
** @param	int	n	- number to check if it's negative.
**
** @return
** 		- The ft_is_negative() function returns 1, if the number 'n' is
** 		negative, or 0 if it's positive.
*/
int	ft_is_negative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}
