/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:42:33 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/30 13:13:42 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_readline.h"

int	get_next_line(int fd, char **line)
{
	char	buf;
	int		reader;

	if (read(fd, 0, 0) < 0 || !line)
		return (-1);
	reader = 1;
	while (reader)
	{
		reader = read(fd, &buf, 1);
		if (reader < 0)
			return (-1);
		if (buf == '\n')
		{
			(*line) = ft_pstrjoin(*line, "\0");
			return (1);
		}
		(*line) = ft_pstrjoin(*line, &buf);
	}
	(*line) = ft_pstrjoin(*line, "\0");
	return (0);
}
