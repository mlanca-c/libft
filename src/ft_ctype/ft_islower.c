/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 19:25:21 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/23 21:17:18 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function checks whether the passed character is lowercase letter. */
int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
