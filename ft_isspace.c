/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:33:22 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/19 09:41:45 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function is a whitespace test.
** The ft_isspace() function checks for white space characters such as space, 
** form-feed ('\f'), newline ('\n'), carriage return ('\r'), horizontal tab
** ('\t'), and vertical tab ('\v').
**
** @param	int	c	- the character to be tested.
**
** @return
** 		- The ft_isspace() functions returns 1 if the character tests flase; or
** 		1 if it tests true.
*/
int	ft_isspace(int c)
{
	if (c == ' ' || c == '\f'
		|| c == '\n' || c == '\r'
		|| c == '\t' || c == '\v')
		return (1);
	return (0);
}
