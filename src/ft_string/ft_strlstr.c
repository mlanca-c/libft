/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 00:22:07 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/25 00:33:18 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int	ft_strlstr(const char *haystack, char *needle, int n)
{
	int	i;
	int	j;

	if (!haystack || !needle || n <= 0)
		return (-1);
	if (ft_strcmp(haystack, needle) == 0)
		return (0);
	i = 0;
	while (haystack[i] || i < n)
	{
		j = 0;
		while (haystack[i + j] && haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return (i);
		i++;
	}
	return (-1);
}
