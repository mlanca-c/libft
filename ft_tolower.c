/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 19:23:51 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 18:15:28 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function is a upper case to lower case convertion.
** The ft_tolower() function converts an upper-case letter to the corresponding
** lower-case letter.  The argument must be representable as an unsigned char or
** the value of EOF.
**
** @param	int	c	- character to be 'upped'.
**
** @return
** 		- If the argument is an upper-case letter, the ft_tolower() function
** 		returns the corresponding lower-case letter if there is one; otherwise,
** 		the argument is returned unchanged.
*/
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
