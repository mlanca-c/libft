/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:33:10 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/02/19 17:06:41 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**free_error(char **str)
{
	size_t		i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static size_t	get_dpointer_len(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	len;

	i = 0;
	len = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (len != 0)
				count++;
			len = 0;
		}
		else
			len++;
		i++;
	}
	return (count + (len != 0 ? 1 : 0));
}

static void		create_arr(char const *s, char c, size_t ct, char **ptr)
{
	char	*str;
	size_t	len;
	size_t	i;
	size_t	j;

	len = 0;
	i = 0;
	j = 0;
	while (j < ct)
	{
		if (s[i] == c || s[i] == '\0')
		{
			if (len != 0)
			{
				if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
					free_error(ptr);
				ft_strlcpy(str, s + i - len, len + 1);
				ptr[j++] = str;
			}
			len = 0;
		}
		else
			len++;
		i++;
	}
}

char			**ft_split(char const *s, char c)
{
	char	**dpointer;
	size_t	len;

	if (!s)
		return (NULL);
	len = get_dpointer_len(s, c);
	if (!(dpointer = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	create_arr(s, c, len, dpointer);
	dpointer[len] = NULL;
	return (dpointer);
}
