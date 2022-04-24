/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 23:49:47 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/24 23:51:13 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/* Searches for the first occurrence of the character c (an unsigned char) in
 * the string pointed to, by the argument str. */
char	*ft_strchr(const char *str, int c)
{
	return (ft_memchr(str, c, ft_strlen(str) + 1));
}
