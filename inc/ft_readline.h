/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readline.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:47:07 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/30 13:17:58 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_READLINE_H
# define FT_READLINE_H

# include <unistd.h>
# include "ft_string.h"
# include "ft_stdio.h"

char	*ft_readline(const char *prompt);
char	*ft_readline_fd(int fd);

int		get_next_line(int fd, char **line);

#endif /* FT_READLINE_H */
