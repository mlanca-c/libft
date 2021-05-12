/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 12:43:46 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 21:00:24 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function trims a string.
** The ft_strtrim() function allocates (with malloc(3)) and returns a copy of
** ’s1’ with the characters specified in ’set’ removed from the beginning and
** the end of the string.
**
** @param	const char	*s1		- string to be trimmed.
** @param	const char	*set	- the reference set of characters to trim.
**
** @return
** 		- The ft_strtrim() function returns the trimmed string, or null if the
** 		allocation fails.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	if (s1 && set)
	{
		start = 0;
		end = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start)
			end--;
		str = (char *)malloc(sizeof(char) * (end - start + 1));
		if (!str)
			return (NULL);
		ft_strlcpy(str, &s1[start], end - start + 1);
		return (str);
	}
	return (NULL);
}
