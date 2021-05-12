/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 12:40:40 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 17:31:38 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function locates a byte in a byte string.
** The ft_strchr() function locates the first occurrence of c (converted to an
** unsigned char) in string s.
**
** @param	const void	*s		- string where character is searched.
** @param	int			c		- character that is to be searched.
** @param	size_t		n		- number of bytes to check in the string.
**
** @return
** 		- The ft_strchr() function returns a pointer to the byte located, or NULL
** 		if no such byte exists within n bytes.
*/
char	*ft_strchr(const char *s, int c)
{
	return (ft_memchr(s, c, ft_strlen(s) + 1));
}
