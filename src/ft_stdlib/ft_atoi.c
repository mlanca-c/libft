/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 00:52:21 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/25 00:57:53 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	n;

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
