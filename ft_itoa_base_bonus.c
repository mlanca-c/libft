/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 12:46:18 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/03/12 13:34:22 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	base_check(char *str)
{
	int i;
	int j;

	if (ft_strlen(str) <= 1)
		return (0);
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z')
				&& !(str[i] >= 'a' && str[i] <= 'z')
					&& !(str[i] >= '0' && str[i] <= '9'))
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

static int	get_len(unsigned long n, int b)
{
	int		l;

	if (n == 0)
		return (1);
	l = 0;
	while (n > 0)
	{
		n /= b;
		l++;
	}
	return (l);
}

char		*ft_itoa_base(unsigned n, char *base)
{
	int		b;
	int		len;
	char	*nbr;

	if (!(b = base_check(base)))
		return (NULL);
	len = get_len(n, b);
	if (!(nbr = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	nbr[len] = '\0';
	if (n == 0)
	{
		nbr[0] = base[0];
		return (nbr);
	}
	while (len > 0)
	{
		nbr[--len] = base[n % b];
		n /= b;
	}
	return (nbr);
}
