/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 15:43:24 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/25 17:26:53 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"

/* 
 * If for some reason the code get_next_line is not compile with the 
 * -D BUFFER_SIZE=<int> - if BUFFER_SIZE is not defined, BUFFER_SIZE will be
 * defined with 1 as it's value.
*/
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

/*
 * used fr the read()
*/
# include <unistd.h>

/*
 * used for malloc() and free().
*/
# include <stdlib.h>

int		get_next_line(int fd, char **line);
char	*ft_strjoin_helper(char *s1, char *s2);

#endif
