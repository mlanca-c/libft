/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:09:33 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/03/10 13:06:34 by mlanca-c         ###   ########.fr       */
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
	return (1);
}

void		ft_putnbr_base(unsigned long nbr, char *base, int *bytes)
{
	int	b;

	if (!base_check(base))
		return ;
	b = ft_strlen(base);
	if (nbr < 0)
	{
		*bytes += ft_putchar('-');
		ft_putnbr_base(-nbr, base, bytes);
	}
	else if (nbr < b)
		*bytes += ft_putchar(base[nbr]);
	else
	{
		ft_putnbr_base(nbr / b, base, bytes);
		ft_putnbr_base(nbr % b, base, bytes);
	}
}

int			ft_putnbr_base_int(unsigned long nbr, char *base)
{
	int	bytes;

	bytes = 0;
	ft_putnbr_base(nbr, base, &bytes);
	return (bytes);
}
