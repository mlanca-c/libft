/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 19:27:20 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/23 21:18:42 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function checks whether the passed character is an uppercase letter. */
int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
