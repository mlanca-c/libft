/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isnumeric.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 19:59:47 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/19 15:36:14 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function checks if the string 'str' is a numeric string.
** The ft_str_isnumeric() function iterates a string and checks if all the
** characters are digits.
**
** @param	char	*str	- string to check if it contains only digits.
**
** @return
** 		- The ft_str_isnumeric() function returns 1, in case the string 'str' is
** 		a numeric string; or returns 0 in case it isn't.
*/
int	ft_str_isnumeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}
