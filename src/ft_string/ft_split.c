/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 00:13:17 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/25 00:20:38 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

static size_t	get_dpointer_len(char const *str, char c);
static void		create_arr(char const *str, char c, size_t n, char **split);
static char		**free_error(char **str);

char	**ft_split(char const *str, char c)
{
	char	**split;
	size_t	len;

	if (!str)
		return (NULL);
	len = get_dpointer_len(str, c);
	split = (char **)malloc(sizeof(char *) * (len + 1));
	if (!split)
		return (NULL);
	create_arr(str, c, len, split);
	split[len] = NULL;
	return (split);
}

static size_t	get_dpointer_len(char const *str, char c)
{
	size_t	i;
	size_t	n;
	size_t	len;

	i = 0;
	len = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			if (len != 0)
				n++;
			len = 0;
		}
		else
			len++;
		i++;
	}
	if (len)
		return (n + 1);
	return (n);
}

static void	create_arr(char const *str, char c, size_t n, char **split)
{
	size_t	len;
	size_t	i;
	size_t	j;

	len = 0;
	i = 0;
	j = 0;
	while (j < n)
	{
		if (str[i] == c || str[i] == '\0')
		{
			if (len != 0)
			{
				split[j] = (char *)malloc(sizeof(char) * (len + 1));
				if (!split[j])
					free_error(split);
				ft_strlcpy(split[j++], str + i - len, len + 1);
			}
			len = 0;
		}
		else
			len++;
		i++;
	}
}

static char	**free_error(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}
