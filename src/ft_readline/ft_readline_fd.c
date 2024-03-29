/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readline_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:50:43 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/30 13:19:05 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_readline.h"

char	*ft_readline_fd(int fd)
{
	char	buf;
	int		reader;
	char	*line;

	if (read(fd, 0, 0) < 0)
		return (NULL);
	reader = 1;
	while (reader)
	{
		reader = read(fd, &buf, 1);
		if (reader < 0)
			return (NULL);
		if (buf == '\n')
		{
			line = ft_pstrjoin(line, "\0");
			return (line);
		}
		line = ft_pstrjoin(line, &buf);
	}
	line = ft_pstrjoin(line, "\0");
	return (line);
}
