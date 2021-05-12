/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 12:38:56 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 15:48:34 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** This function compares two string.
** The memcmp() function compares byte string s1 against byte string s2.  Both
** strings are assumed to be n bytes long.
**
** @param	const void	*s1		- string to be compared with s2.
** @param	const void	*s2		- string to be compared with s1.
** @param	size_t		n		- number of bytes to compare in each string.
**
** @return
** 		- The memcmp() function returns zero if the two strings are identical,
** 		otherwise returns the difference between the first two differing bytes
** 		(treated as unsigned char values, so that `\200' is greater than `\0',
** 		for example).  Zero-length strings are always identical.  This behavior
** 		is not required by C and portable code should only depend on the sign of
** 		the returned value.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if (n == 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (*str1 == *str2 && n > 1)
	{
		str1++;
		str2++;
		n--;
	}
	return (*str1 - *str2);
}
