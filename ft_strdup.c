/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 19:26:15 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 18:32:43 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function saves a copy of a string.
** The ft_strdup() function allocates sufficient memory for a copy of the string
** s1, does the copy, and returns a pointer to it. The pointer may subsequently
** be used as an argument to the function free().
**
** @param	const char	*s1		- string to copy to s1.
**
** @return
** 		- The ft_strdup() function, returns null if an error was encountered,
** 		and returns the string that was copied.
*/
char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*dst;

	len = 0;
	while (s1[len])
		len++;
	i = 0;
	dst = (char *)malloc((len + 1) * sizeof(char));
	if (!dst)
		return (0);
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
