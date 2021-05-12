/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:34:24 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 22:13:28 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This funtion outputs a character.
** The ft_putchar_fd() function outputs the character ’c’ to the given file
** descriptor.
**
** @param	char	c	- The character to output.
** @param	int		fd	- the file descriptor on which to write.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
