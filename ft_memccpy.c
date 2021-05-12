/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 16:28:24 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 15:29:04 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function copies a strig until a character is found.
** The memccpy() function copies bytes from string src to string dst.  If the
** character c (as converted to an unsigned char) occurs in the string src, the
** copy stops and a pointer to the byte after the copy of c in the string dst
** is returned.  Otherwise, n bytes are copied, and a NULL pointer is returned.
**
** The source and destination strings should not overlap, as the behavior is
** undefined.
**
** @param	void		*dst		- string from where n bytes of src will be
** 									copied to.
** @param	const void	*src		- string to be copied to dst.
** @param	int			c			- character to be found in src. If found,
** 									copy stops.
** @param	size_t		n			- number of bytes to be copied from src to
** 									dst.
**
** @return
** 		- The memccpy() function returns the original value of dst.
*/
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	chr;

	if (!dst && !src)
		return (NULL);
	i = 0;
	chr = c;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		if (((unsigned char *)dst)[i] == chr)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
