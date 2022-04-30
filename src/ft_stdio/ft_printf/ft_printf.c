/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 15:59:47 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/30 16:08:04 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

static int	ft_printf_fmt(char *str, va_list args);

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		i;

	va_start(args, fmt);
	i = ft_printf_fmt((char *)fmt, args);
	va_end(args)
	return (i);
}

static int	ft_printf_fmt(char *str, va_list args)
{
	int	r;
	int	i;

	i = 0;
	r = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			if (str[i + 1] == 's')
				r += ft_putstr_fd(va_arg(args, char *), STDIN_FILENO);
			else if (str[i + 1] == 'd')
				r += ft_putnbr_fd(va_arg(args, int), STDIN_FILENO);
			else if (str[i + 1] == 'x')
				r += ft_putnbr_base_fd(va_arg(args, unsigned int), 16);
			i++;
		}
		else
			r += ft_putchar_fd(str[i], STDIN_FILENO);
		i++;
	}
	return (i);
}
