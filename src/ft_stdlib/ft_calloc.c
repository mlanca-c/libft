/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 00:58:14 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/25 01:00:20 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

/* Allocates the requested memory and returns a pointer to it. */
void	*ft_calloc(size_t nitems, size_t size)
{
	char	*str;

	str = (char *)malloc(size * nitems);
	if (!str)
		return (NULL);
	ft_memset(str, 0, size * nitems);
	return (str);
}
