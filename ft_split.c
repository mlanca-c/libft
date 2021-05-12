/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:33:10 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 21:57:31 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function frees a double pointer string.
** The free_error() function frees the given char **str. In this case it frees
** the double pointer string from ft_split(), once an allocation error occurs.
**
** @param	char	**str	- double pointer to be freed.
**
** @return
** 		- The free_error() function returns null.
*/
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

/*
** This function creates an array.
** The get_pointer_len() function takes the given string 's' in ft_split, and
** counts the number of valid char c occurencies that s has, therefore getting
** the correct length of the double pointer string to be returned by ft_split.
**
** @param	const char	*s	- string to be split.
** @param	char		c	- delimiter character.
**
** @return
** 		- The get_dpointer_len() function returns the number of occurrences of
** 		'c' in 's'.
*/
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
	if (len)
		return (count + 1);
	return (count);
}

/*
** This function creates an array.
** The create_arr() function creates an array from 's', until it finds a 'c'
** occurrence.
**
** @param	const char	*s		- string to be split.
** @param	char		c		- delimiter character.
** @param	size_t		ct		- the length of valid occurrences of 'c' in 's'.
** @param	char		**str	- the double pointer string to be returned from
** 								ft_split().
*/
static void	create_arr(char const *s, char c, size_t ct, char **ptr)
{
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
				ptr[j] = (char *)malloc(sizeof(char) * (len + 1));
				if (!ptr[j])
					free_error(ptr);
				ft_strlcpy(ptr[j++], s + i - len, len + 1);
			}
			len = 0;
		}
		else
			len++;
		i++;
	}
}

/*
** This function splits a string.
** The ft_split() function allocates (with malloc(3)) and returns an array of
** strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The
** array must be ended by a null pointer.
**
** @param	const char	*s	- string to be split.
** @param	char		c	- delimiter character.
**
** @return
** 		- The ft_split() function returns the array of new strings resulting
** 		from the split, or null if the allocation fails.
*/
char	**ft_split(char const *s, char c)
{
	char	**dpointer;
	size_t	len;

	if (!s)
		return (NULL);
	len = get_dpointer_len(s, c);
	dpointer = (char **)malloc(sizeof(char *) * (len + 1));
	if (!dpointer)
		return (NULL);
	create_arr(s, c, len, dpointer);
	dpointer[len] = NULL;
	return (dpointer);
}
