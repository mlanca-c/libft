/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:35:34 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 22:21:49 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This funtion outputs an integer.
** The ft_putnbr_fd() function outputs the integer 'n' to the given file
** descriptor.
**
** @param	int		n	- The integer to output.
** @param	int		fd	- file descriptor on which to write.
*/
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n < 10)
	{
		ft_putchar_fd(n + '0', fd);
		return ;
	}
	ft_putnbr_fd(n / 10, fd);
	ft_putnbr_fd(n % 10, fd);
}
