/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 18:02:56 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 17:17:04 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function locates a character in a string.
** The ft_strrchr() function is identical to strchr(), except it locates the last
** occurrence of c.
**
** @param	const void	*s		- string where character is searched.
** @param	int			c		- character that is to be searched.
**
** @return
** 		- The function strrchr() returns a pointer to the located character, or
** 		NULL if the character does not appear in the string.
*/
char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if (c == 0)
		return ((char *)(s + len));
	if (!s[0])
		return (NULL);
	while (len--)
	{
		if (*(s + len) == (char)c)
			return ((char *)(s + len));
	}
	return (NULL);
}
