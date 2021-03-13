/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 18:07:37 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/03/06 11:59:09 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int				i;
	int				neg;
	long long int	num;

	i = 0;
	while (str[i] == ' ' || str[i] == '\f'
				|| str[i] == '\n' || str[i] == '\r'
					|| str[i] == '\t' || str[i] == '\v')
		i++;
	neg = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			neg = -1;
	}
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (neg * (str[i++] - '0'));
		if (num > 2147483648)
			return (-1);
		if (num < -2147483648)
			return (0);
	}
	return (num);
}
