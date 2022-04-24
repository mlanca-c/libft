/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 23:58:28 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/25 00:00:06 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/* Searches for the last occurrence of the character c (an unsigned char) in the
 * string pointed to by the argument str. */
char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	len = ft_strlen(str);
	if (c == 0)
		return ((char *)(str + len));
	if (!str[0])
		return (NULL);
	while (len--)
	{
		if (*(str + len) == (char)c)
			return ((char *)(str + len));
	}
	return (NULL);
}
