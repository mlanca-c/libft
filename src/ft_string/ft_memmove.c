/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:03:07 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/24 22:06:32 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/* Another function to copy n characters from str2 to str1. */
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
