/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 16:28:24 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/02/11 14:30:20 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	chr;

	if (!dest && !src)
		return (NULL);
	i = 0;
	chr = c;
	while (i < n)
	{
		if ((((unsigned char *)dest)[i] = ((unsigned char *)src)[i]) == chr)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
