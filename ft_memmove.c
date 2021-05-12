/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:10:05 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 18:31:35 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function copies a byte string.
** The memmove() function copies len bytes from string src to string dst.  The
** two strings may overlap; the copy is always done in a non-destructive manner.
**
** @param	void		*dst		- string from where n bytes of src will be
** 									copied to.
** @param	const void	*src		- string to be copied to dst.
** @param	size_t		len			- number of bytes to be copied from src to
** 									dst.
**
** @return
** 		- The memmove() function returns the original value of dst.
*/
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	ptr = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	if (!ptr && !ptr2)
		return (NULL);
	i = 1;
	if (ptr > ptr2)
	{
		while (i <= n)
		{
			ptr[n - i] = ptr2[n - i];
			i++;
		}
		return (dst);
	}
	while (n > 0)
	{
		*(ptr++) = *(ptr2++);
		n--;
	}
	return (dst);
}
