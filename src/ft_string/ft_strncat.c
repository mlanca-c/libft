/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 23:43:01 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/24 23:44:19 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/* Appends the string pointed to, by src to the end of the string pointed to by
 * dest. */
char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char			*r;
	unsigned int	i;

	r = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	i = 0;
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	*dest = '\0';
	return (r);
}
