/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 01:00:30 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/25 01:02:59 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

/* Allocates the requested memory and returns a pointer to it. */
void	*ft_malloc(size_t size)
{
	return (malloc(size));
}
