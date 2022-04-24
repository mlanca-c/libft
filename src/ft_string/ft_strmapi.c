/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 00:30:59 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/25 00:32:36 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char	*map;
	int		i;

	if (!str || !f)
		return (NULL);
	map = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!map)
		return (NULL);
	i = 0;
	while (str[i])
	{
		map[i] = f(i, str[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
