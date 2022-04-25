/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_labs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 01:20:37 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/25 01:21:04 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Returns the absolute value of x. */
int	ft_labs(long int x)
{
	if (x < 0)
		return (-x);
	return (x);
}
