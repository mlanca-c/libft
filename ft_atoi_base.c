/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 00:00:21 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/19 15:07:36 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * This function gets the character necessary for the integer conversion in
 * ft_atoi_base() function.
 *
 * @param	int		c		- character from the 'str' in ft_atoi_base()
 * 							function.
 * @param	int		b		- length of 'base'.
 * @param	char	*base	- base to convert the c on.
 *
 * @return
 * 		- The base() function returns the position of 'c' in 'base'; or -1 if
 * 		'c' doen's exist in 'base'.
*/
static int	ft_base(int c, int b, char *base)
{
	int	i;

	i = 0;
	while (i < b)
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

/*
** This function converts a ASCII string to a integer.
** The ft_atoi_base() function converts the initual portion of the string
** pointed to by str to int representation, in a certain base.
**
** @param	char	*str	- string to be converted to int.
** @param	char	*base	- base to convert the string on.
**
** @return
** 		- The ft_atoi_base() function returns the int representation of the
** 		string 'str' in a certain base 'base'.
*/
int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	number;
	int	b;

	i = 0;
	b = ft_base_check(base);
	if (!b)
		return (0);
	while (ft_isspace(str[i]))
		i++;
	number = 0;
	while (ft_base(str[i], b, base) != -1)
	{
		number *= b;
		number += ft_base(str[i], b, base);
		i++;
	}
	return (number);
}
