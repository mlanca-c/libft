/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 01:28:43 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/25 01:29:05 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

static int	ft_nbrlen(long int n, int base);

char	*ft_ltoa_base(long int n, int base)
{
	char	*b;
	int		len;
	char	*str;

	if (base <= 0)
		return (NULL);
	len = ft_nbrlen(n, base);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	b = ft_substr("0123456789abcdefghijklmnopqrstuvwxyz", 0, base - 1);
	if (!b)
		return (NULL);
	if (n == 0)
		str[0] = b[0];
	while (len > 0)
	{
		str[--len] = b[n % base];
		n /= base;
	}
	return (str);
}

static int	ft_nbrlen(long int n, int base)
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
