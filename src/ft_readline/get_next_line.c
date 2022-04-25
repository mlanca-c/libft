/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:42:33 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/25 15:50:20 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_readline.h"

static char	*get_after_newline(char *saved);
static char	*get_until_newline(char *saved);
static char	*joinstrs(char *saved, char *buf);
static int	return_value(int reader);

int	get_next_line(int fd, char **line)
{
	static char	*saved[1024];
	char		*buf;
	int			reader;

	if ((read(fd, 0, 0) == -1) || !line || BUFFER_SIZE <= 0)
		return (-1);
	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (-1);
	reader = 1;
	while (!ft_strchr(saved[fd], '\n') && reader != 0)
	{
		reader = read(fd, buf, BUFFER_SIZE);
		if (reader == -1)
		{
			free(buf);
			return (-1);
		}
		buf[reader] = '\0';
		saved[fd] = joinstrs(saved[fd], buf);
	}
	free(buf);
	*line = get_until_newline(saved[fd]);
	saved[fd] = get_after_newline(saved[fd]);
	return (return_value(reader));
}

static char	*get_after_newline(char *saved)
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

static char	*get_until_newline(char *saved)
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

static char	*joinstrs(char *saved, char *buf)
{
	char	*new;

	if (!saved && !buf)
		return (NULL);
	if (!saved)
		return (ft_strdup(buf));
	new = ft_strjoin(saved, buf);
	free(saved);
	return (new);
}

static int	return_value(int reader)
{
	if (reader == 0)
		return (0);
	return (1);
}
