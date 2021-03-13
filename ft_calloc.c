/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 12:43:42 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/02/12 16:14:13 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char *tab;

	if (!(tab = (char *)malloc(size * nmemb)))
		return (NULL);
	ft_memset(tab, 0, size * nmemb);
	return (tab);
}
