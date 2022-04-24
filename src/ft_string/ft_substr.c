/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 00:00:36 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/25 00:05:33 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_substr(const char *str, unsigned int start, size_t n)
{
	char	*substr;
	size_t	i;
	size_t	j;

	if (!str)
		return (NULL);
	if (ft_strlen(str) < start)
		return (ft_strdup(""));
	if (ft_strlen(str) < n)
		substr = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	else
		substr = (char *)malloc((n + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (i >= start && j < n)
			substr[j++] = str[i];
		i++;
	}
	substr[j] = '\0';
	return (substr);
}
