/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 00:43:13 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/25 00:50:58 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

/* Converts the string pointed to, by the argument str to a floating-point
 * number (type double). */
double	ft_atof(const char *str)
{
	double	n;
	int		negative;
	int		i;
	int		p;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	negative = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			negative = -1;
	}
	n = 0;
	while (ft_isdigit(str[i]))
		n = (n * 10) + (negative * (str[i++] - '0'));
	if (str[i++] == '.')
	{
		p = 0;
		while (ft_isdigit(str[i]) && p++)
			n = (n * 10) + (negative * (str[i++] - '0'));
		n = (n / ft_pow(10, (double)p));
	}
	return (n);
}
