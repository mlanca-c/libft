/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pstrjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 13:14:26 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/30 13:19:52 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_pstrjoin(char const *str1, char const *str2)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!str2)
		return (NULL);
	if (!str1)
		return (ft_strdup(str2));
	i = ft_strlen(str1) + ft_strlen(str2);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (str1[++i])
		str[i] = str1[i];
	j = -1;
	while (str2[++j])
		str[i + j] = str2[j];
	str[i + j] = '\0';
	free((char *)str1);
	return (str);
}
