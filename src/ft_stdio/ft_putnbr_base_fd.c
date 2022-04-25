/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:34:11 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/25 13:50:22 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

void	ft_putnbr_base_fd(unsigned int n, int base, int fd)
{
	int		i;
	char	*b;
	int		print[36];

	b = ft_substr("0123456789abcdefghijklmnopqrstuvwxyz", 0, base);
	if (!b)
		return ;
	if (!n)
		return (ft_putchar_fd(b[0], fd));
	i = 0;
	while (n)
	{
		print[i++] = n % base;
		n /= base;
	}
	while (--i >= 0)
		ft_putchar_fd(b[print[i]], fd);
}
