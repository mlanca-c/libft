/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 19:59:29 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/23 21:17:56 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function checks whether the passed character is a hexadecimal digit. */
int	ft_isxdigit(int c)
{
	return ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f')
		|| (c >= 'A' && c <= 'F'));
}
