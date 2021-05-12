/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 13:02:52 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 17:26:54 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function compares strings.
** The ft_strncmp() compares not more than n characters. Because ft_strncmp() is
** designed for comparing strings rather than binary data, characters that
** appear after '\0' character are not compared.
**
** @param	const char	*s1		- string to be compared with s2.
** @param	const char	*s2		- string to be compared with s1.
** @param	size_t		n		- number of bytes to compare in each string.
**
** @return
** 		- The ft_strncmp() function returns 0 if both strings are equal in the
** 		first n bytes, or returns their difference once it appears.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i + 1 < n)
		i++;
	if (s1[i] == s2[i] || n == 0)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
