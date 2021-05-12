/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 12:53:40 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 16:31:59 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function does size-bounding string copying.
** The strlcpy() function copies and strings with the same input parameters.
** It is designed to be a safer, more consistent, and less error prone
** replacement for the easily misused function strncpy().
** strlcpy() takes the full size of the destination buffer and guarantees
** NULL-termination if there is room. Note that room for the NULL should be 
** included in dstsize.
** strlcpy() copies up to dstsize - 1 characters from the string src to dst,
** NULL-terminating the result if dstsize is not 0.
** If the src and dst strings overlap, the behavior is undefined.
**
** @param	char		*dst	- string from where dstsize bytes of src will be
** 								copied to.
** @param	const char	*src	- string to be copied to dst.
** @param	size_t		dstsize	- number of bytes to be copied from src to dst.
**
** @return
** 		- the strlcpy() function returns the total length of the string it has
** 		tried to create - that means the length of src.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srcsize;

	if (!dst || !src)
		return (0);
	srcsize = 0;
	while (src[srcsize])
		srcsize++;
	i = 0;
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}
