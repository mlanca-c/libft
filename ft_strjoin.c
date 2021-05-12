/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:32:00 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 20:57:32 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function joins two strings together.
** The ft_strjoin() alocates (with malloc(3)) and returns a new string, which
** is the result of the concatenation of ’s1’ and ’s2’.
**
** @param	const char	*s1		- prefix string.
** @param	const char	*s2		- suffix string.
**
** @returns
** 		- The ft_strjoin() function returns the new string, or null if the
** 		allocation fails.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*tab;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2);
	tab = (char *)malloc(sizeof(char) * (i + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		tab[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		tab[i + j] = s2[j];
		j++;
	}
	tab[i + j] = '\0';
	return (tab);
}
