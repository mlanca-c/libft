/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 17:43:31 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/04/30 11:57:08 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/**
 * This function gets the lenght of a string.
 *
 * @param	char *s		string of characters.
 *
 * @return	lenght of s.
 */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
 * This function allocates sufficient memory for a copy of the string s, does
 * the copy, and returns a pointer to it.
 *
 * @param char *s		string of characters.
 *
 * @return
 * 	char *dst			copy of s.
 */
char	*ft_strdup(char *s)
{
	int		i;
	char	*dst;

	dst = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/**
 * This function creates a char * called tab, that allocates the necessary
 * amount of memory to be able to contain s1 and s2 together.
 *
 * @param	char *s1	first string of characters being copied to tab.
 * @param	char *s2	second string of characters being copied to tab.
 *
 * @returns		both strings joined in one string - tab.
 */
char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*tab;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	i = ft_strlen(s1) + ft_strlen(s2) + 1;
	tab = (char *)malloc(i * sizeof(char));
	if (!tab)
		return (NULL);
	i = -1;
	while (s1[++i])
		tab[i] = s1[i];
	j = -1;
	while (s2[++j])
		tab[i + j] = s2[j];
	tab[i + j] = '\0';
	free(s1);
	return (tab);
}
