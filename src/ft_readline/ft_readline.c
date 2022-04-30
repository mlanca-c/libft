/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:48:51 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/30 13:19:22 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_readline.h"

char	*ft_readline(const char *prompt)
{
	ft_putstr_fd((char *)prompt, STDIN_FILENO);
	return (ft_readline_fd(STDIN_FILENO));
}
