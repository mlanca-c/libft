/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:54:07 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/19 10:10:53 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function gets the number of digits of an integer.
** The ft_nbrlen() function returns the number of digits of an integer - the
** length that the string - that represents the integer - will need to have.
**
** @param	int	n		- number to get length from.
** @param	int	base	- base of the number we want to get the length from.
**
** @return
** 		- The number of digits of 'n'.
*/
int	ft_nbrlen(unsigned long long int number, int base)
{
	int	length;

	if (number == 0)
		return (1);
	length = 0;
	while (number > 0)
	{
		number /= base;
		length++;
	}
	return (length);
}
