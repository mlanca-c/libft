/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 00:55:03 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/25 00:58:04 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

/* Converts the string pointed to, by the argument str to a long integer (type
 * long int). */
long int	ft_atol(const char *str)
{
	int			i;
	int			neg;
	long int	n;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	neg = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			neg = -1;
	}
	n = 0;
	while (ft_isdigit(str[i]))
		n = (n * 10) + (str[i++] - '0');
	return (n * neg);
}
