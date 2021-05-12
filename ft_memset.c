/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 11:43:37 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 15:29:16 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function fills a byte string with a byte value.
** The ft_memset() function writes len bytes of value c (converted to an
** unsigned char) to the string b.
**
** @param	void 	*b		- string that is going to be overwritten.
** @param	int 	c		- value (character) that is going to be written in b.
** @param	size_t 	len		- number of bytes that c is going to be written in b.
**
** @return
** 		- the ft_memset function returns its first argument.
*/
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i++] = (unsigned char)c;
	}
	return (b);
}
