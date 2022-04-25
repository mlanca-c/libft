/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readline.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:47:07 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/25 15:42:52 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_READLINE_H
# define FT_READLINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE	1
# endif /* BUFFER_SIZE */

# include <unistd.h>
# include "ft_string.h"
# include "ft_stdio.h"

char	*ft_readline(const char *line);
char	*ft_readline_fd(const char *line, int fd);

int		get_next_line(int fd, char **line);

#endif /* FT_READLINE_H */
