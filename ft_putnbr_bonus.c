/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 18:10:58 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/03/12 13:35:11 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	char	*temp;
	int		len;

	ft_putnbr_fd(n, 1);
	temp = ft_itoa(n);
	len = ft_strlen(temp);
	free(temp);
	return (len);
}
