/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 19:01:22 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 18:04:19 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function is a test for ASCII characters.
** The ft_isascii() function tests for an ASCII character, which is any character
** between 0 and octal 0177 inclusive.
**
** @param	int	c	- the character to be tested.
**
** @return
**		- The ft_isascii() function returns zero if the character tests false
**		and returns non-zero if the character tests true.
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
