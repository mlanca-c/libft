/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 00:35:01 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/25 00:38:24 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trim;

	if (str && set)
	{
		start = 0;
		end = ft_strlen(str);
		while (str[start] && ft_strchr(set, str[start]))
			start++;
		while (str[end - 1] && ft_strchr(set, str[end - 1]) && end > start)
			end--;
		trim = (char *)malloc(sizeof(char) * (end - start + 1));
		if (!trim)
			return (NULL);
		ft_strlcpy(trim, &str[start], end - start + 1);
		return (trim);
	}
	return (NULL);
}
