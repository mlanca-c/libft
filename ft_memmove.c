/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:10:05 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/03/28 14:10:34 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	ptr = (unsigned char *)dest;
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
		return (dest);
	}
	while (n > 0)
	{
		*(ptr++) = *(ptr2++);
		n--;
	}
	return (dest);
}
