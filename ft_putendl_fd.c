/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:35:07 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/12 22:20:07 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This funtion outputs a string.
** The ft_putendl_fd() function outputs a string 's' to the given file
** descriptor, followed by a new line.
**
** @param	char	*s	- string to output.
** @param	int		fd	- file descriptor on which to write.
*/
void	ft_putendl_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
