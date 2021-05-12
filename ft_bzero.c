/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:06:06 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 15:07:50 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function writes zeroes to a byte string.
** The ft_bzero() function writes n zeroed ('\0') bytes to the string s. If n
** is zero, ft_bzero() does nothing.
**
** @param	void*	s		- string to be overwritten.
** @param	size_t	n		- number of bytes to be 'zeroed' in s.
*/

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i++] = '\0';
	}
}
