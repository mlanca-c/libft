/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 00:45:01 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/25 00:48:30 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/* Returns x raised to the power of y. */
double	ft_power(double x, double y)
{
	double p;

	if (y < 0)
		return (0);
	p = 1;
	while (y)
		ft_power(p *= x, --y);
	return (p);
}
