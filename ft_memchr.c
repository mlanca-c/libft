/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 12:37:51 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 17:13:37 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function locates a byte in a byte string.
** The ft_memchr() function locates the first occurrence of c (converted to an
** unsigned char) in string s.
**
** @param	const void	*s		- string where character is searched.
** @param	int			c		- character that is to be searched.
** @param	size_t		n		- number of bytes to check in the string.
**
** @return
** 		- The ft_memchr() function returns a pointer to the byte located, or NULL
** 		if no such byte exists within n bytes.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}
