/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 23:12:38 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 23:25:27 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_power() function returns the value of 'n' to the power of 'times'
**
** @param	long long n		- number to multiply 'times' times with itself.
** @param	long long times	- number of times 'n' multiplies itself.
**
** @return
** 		- The ft_power() function returns the number 'n' powered 'times' times.
*/
long long int	ft_power(long long n, long long times)
{
	long long	p;

	if (times < 0)
		return (0);
	p = 1;
	while (times)
		ft_power(p *= n, --times);
	return (p);
}
