/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 01:15:14 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/25 01:16:50 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

static int	ft_base(int c, int base);

long int	ft_atol_base(char *str, int base)
{
	int			i;
	long int	n;

	i = 0;
	if (!base)
		return (0);
	while (ft_isspace(str[i]))
		i++;
	n = 0;
	while (ft_base(str[i], base) != -1)
	{
		n *= base;
		n += ft_base(str[i], base);
		i++;
	}
	return (n);
}

static int	ft_base(int c, int base)
{
	int		i;
	char	*b;

	i = 0;
	b = ft_substr("0123456789abcdefghijklmnopqrstuvwxyz", 0, base);
	if (!b)
		return (-1);
	while (i < base)
	{
		if (c == b[i])
			return (i);
		i++;
	}
	return (-1);
}
