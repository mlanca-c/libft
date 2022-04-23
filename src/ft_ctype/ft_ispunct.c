/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 19:54:43 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/23 21:17:32 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function checks whether the passed character is a punctuation
 * character. */
int	ft_ispunct(int c)
{
	return ((c >= '!' && c <= '/') || (c >= ':' && c <= '@')
		|| (c >= '[' && c <= '`') || (c >= '{' && c <= '~'));
}
