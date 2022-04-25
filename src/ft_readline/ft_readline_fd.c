/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readline_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:50:43 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/25 15:55:59 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_readline.h"

static char	*error_handler(char *message);
static char	*get_nl(char **saved);
static char	*get_until_nl(char *saved);
static char	*get_after_nl(char *saved);

char	*ft_readline_fd(const char *prompt, int fd)
{
	static char	*saved[1024];
	char		*buf;
	int			reader;

	if (read(fd, 0, 0) < 0 || BUFFER_SIZE <= 0)
		return (error_handler("readline: read: invalid fd or BUFFER_SIZE"));
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (error_handler("readline: malloc: failed to allocate memory"));
	ft_putstr_fd((char *)prompt, fd);
	reader = 1;
	while (!ft_strchr(saved[fd], '\n') && reader > 0)
	{
		reader = read(fd, buf, BUFFER_SIZE);
		if (reader == -1)
		{
			free (buf);
			return (error_handler("readline: read: Could not read from fd"));
		}
		buf[reader] = '\0';
		saved[fd] = ft_strjoin_f(saved[fd], buf);
	}
	free(buf);
	return (get_nl(&saved[fd]));
}

static char	*error_handler(char *message)
{
	ft_putendl_fd(message, STDERR_FILENO);
	return (NULL);
}

static char	*get_nl(char **saved)
{
	char	*line;

	line = get_until_nl(*saved);
	*saved = get_after_nl(*saved);
	return (line);
}

static char	*get_until_nl(char *saved)
{
	int		i;
	char	*line;

	if (!saved)
		return (NULL);
	i = 0;
	while (saved[i] != '\n' && saved[i])
		i++;
	line = (char *)malloc(sizeof(char) * (i + 1));
	if (!line)
		return (NULL);
	i = 0;
	while (saved[i] != '\n' && saved[i])
	{
		line[i] = saved[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

static char	*get_after_nl(char *saved)
{
	int		i;
	int		j;
	char	*new_line;

	if (!saved)
		return (NULL);
	i = 0;
	while (saved[i] != '\n' && saved[i])
		i++;
	if (!saved[i])
	{
		free(saved);
		return (NULL);
	}
	new_line = (char *)malloc(sizeof(char) * (ft_strlen(saved) - i + 1));
	if (!new_line)
		return (NULL);
	i++;
	j = 0;
	while (saved[i])
		new_line[j++] = saved[i++];
	new_line[j] = '\0';
	free(saved);
	return (new_line);
}
