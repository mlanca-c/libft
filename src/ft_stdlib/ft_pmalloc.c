/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pmalloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 01:03:10 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/25 01:04:28 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

void	*ft_pmalloc(size_t size, void (*f)(void *), void *arg)
{
	void	*ptr;

	ptr = malloc(size);
	if (!ptr)
		f(arg);
	return (ptr);
}
