/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 01:17:23 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/25 13:17:13 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

static int	ft_nbrlen(int n, int base);

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	i = ft_nbrlen(ft_abs(n), 10);
	if (n < 0)
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[i--] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

static int	ft_nbrlen(int n, int base)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	while (n > 0)
	{
		n /= base;
		i++;
	}
	return (i);
}
