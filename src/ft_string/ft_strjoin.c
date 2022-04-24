/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 00:25:54 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/25 00:27:07 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	size_t	i;
	size_t	j;
	char	*tab;

	if (!str1 || !str2)
		return (NULL);
	i = ft_strlen(str1) + ft_strlen(str2);
	tab = (char *)malloc(sizeof(char) * (i + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (str1[i])
	{
		tab[i] = str1[i];
		i++;
	}
	j = 0;
	while (str2[j])
	{
		tab[i + j] = str2[j];
		j++;
	}
	tab[i + j] = '\0';
	return (tab);
}
