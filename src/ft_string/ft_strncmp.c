/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 23:55:01 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/24 23:56:34 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/* Compares at most the first n bytes of str1 and str2. */
int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (str1[i] != '\0' && str1[i] == str2[i] && i + 1 < n)
		i++;
	if (str1[i] == str2[i] || n == 0)
		return (0);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
