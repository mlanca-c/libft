/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 15:43:04 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/25 17:26:24 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/**
 * This function checks if the param str contains '\n'. 
 * @param char	*saved		string with that might or might not have a '\n'.
 *
 * @return
 * 	1	if saved has a '\n'.
 * 	0	if saved doesn't have a '\n'.
 */
int	has_new_line(char *saved)
{
	int	i;

	if (!saved)
		return (0);
	i = 0;
	while (saved[i])
	{
		if (saved[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

/**
 * This function creates a char * called line and gives it what's in the saved
 * param until it finds a '\n' or until it has reached '\0'.
 *
 * @param char	*saved		string that contains '\n'.	
 *
 * @return
 * NULL 	if malloc wasn't successful.
 * line		if there were no errors in the function.
 */
char	*get_until_newline(char *saved)
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

/**
 * This function creates a char *called new_line and gives it what's in the
 * saved param after '\n' until '\0'.
 *
 * @param	char *saved			string that contains '\n'.
 *
 * @return
 * 	NULL	if malloc wasn't successful.
 * 	saved	if there were no errors in the function.
 */
char	*get_after_newline(char *saved)
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

/**
 * This function sees what the read() from get_next_line() returned. If it
 * returned 0 that means that there is no more data to read from the fd. Else
 * the EOF hasn't been reached and the function returns 1.
 *
 * @param int reader		the return of the read function.
 *
 * @return
 * 		 1	  if EOF wasn't reached.
 * 		 0	  if it has reached the EOF.

 */
int	return_value(int reader)
{
	if (reader == 0)
		return (0);
	return (1);
}

/**
 * This function reads a line from a file discriptor.
 * @param int fd		file descriptor for reading.
 *
 * @param char **line	value of what has been read.
 *
 * @return
 * 		-1				if an error happened.
 * 		return_value()	if no errors happened.
 *
 * The function consists of a loop that will check if saved[fd] has a '\n', if
 * it doesn't, then the compiler goes inside the loop. If it doesn't, then the
 * it exits the loop and param line gets everything before '\n' and saved[fd] 
 * gets what's after the '\n'.
 * Inside the loop the read() will read BUFFER_SIZE bytes from the file with the
 * respective fd - if valid - into the buf.
 * After that, ft_strjoin will server in order to join what was read - what is
 * in the buf - with was before that - saved[fd]. This will happen in a loop,
 * and will result in the saved[fd] having a complete line of a file - and maybe
 * some more. Data from after '\n' will remain in the saved[fd] after this 
 * function ends - static variable - preventing data from being lost.
 */
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
	while (!has_new_line(saved[fd]) && reader != 0)
	{
		reader = read(fd, buf, BUFFER_SIZE);
		if (reader == -1)
		{
			free(buf);
			return (-1);
		}
		buf[reader] = '\0';
		saved[fd] = ft_strjoin_helper(saved[fd], buf);
	}
	free(buf);
	*line = get_until_newline(saved[fd]);
	saved[fd] = get_after_newline(saved[fd]);
	return (return_value(reader));
}
