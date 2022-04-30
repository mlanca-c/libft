/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pcalloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 13:20:35 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/30 13:23:18 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "ft_stdlib.h"

void	*ft_pcalloc(size_t size, void (*f)(char *))
{
	void	*ptr;

	ptr = malloc(size);
	if (!ptr)
		f("calloc: failed at allocating memory");
	return (ptr);
}
