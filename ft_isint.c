/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 15:39:07 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/19 16:09:45 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function is a integer test.
** The ft_isint() function checks if the integer type 'n' is between the values
** of 2147483647 and -2147483648.
**
** @param	int	n	- integer to check.
**
** @return
** 		- The ft_isint() function returns 1 if the integer is between 2147483647
** 		and -2147483648; or 0 if it isn't.
*/
int	ft_isint(long long int n)
{
	if (n > 2147483647 || n < -2147483648)
		return (0);
	return (1);
}
