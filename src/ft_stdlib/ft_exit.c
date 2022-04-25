/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:57:26 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/25 12:59:34 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

/* Causes the program to terminate normally. */
void	*ft_exit(int status, void (*f)(void *), void *arg)
{
	f(arg);
	exit(status);
}
