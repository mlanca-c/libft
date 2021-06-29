/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 12:49:15 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/06/29 19:39:19 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function finds the length of the string.
** The strlen() function computes the length of the string s.  The strnlen()
** function attempts to compute the length of s, but never scans beyond the
** first maxlen bytes of s.
**
** @param	const char	*s	-	string of characters.
**
** @return
** 		- The strlen() function returns the number of characters that precede
** 		the terminating NUL character.  The strnlen() function returns either
** 		the same result as strlen() or maxlen, whichever is smaller.
*/
size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}
