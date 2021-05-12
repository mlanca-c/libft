/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:33:36 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 22:03:22 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function gets the number of digits of an integer.
** The get_len() function returns the number of digits of an integer - the
** length that the string - that represents the integer - will need to have.
**
** @param	int	n	- integer to convert in ft_itoa().
**
** @return
** 		- The number of digits of 'n'.
*/
int	get_len(int n)
{
	int		l;

	l = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		l++;
	}
	while (n > 0)
	{
		n /= 10;
		l++;
	}
	return (l);
}

/*
** This function converts an integer to a numeric string.
** The ft_itoa() function allocates (with malloc()) and returns a string
** representing the integer received as an argument. Negative numbers must be
** handled.
**
** @param	int	n	- integer to convert.
**
** @return
** 		- The ft_itoa() function returns the string representing the integer, or
** 		null if the allocation fails.
*/
char	*ft_itoa(int n)
{
	char	*s;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = get_len(n);
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	s[i--] = '\0';
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	if (n == 0)
		s[0] = '0';
	while (n > 0)
	{
		s[i--] = (n % 10) + '0';
		n /= 10;
	}
	return (s);
}
