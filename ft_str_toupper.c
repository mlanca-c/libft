/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_toupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:25:21 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/19 13:32:29 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function is a lower case string 'str' to upper case convertion.
** The ft_str_toupper() function iterates a string 'str' and converts the
** lower-case characters of the string to upper-case.
**
** @param	char	*str	- string to iterate and convert.
*/
void	ft_str_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
}
