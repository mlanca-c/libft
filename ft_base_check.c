/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:22:04 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/05/19 09:52:27 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function checks if a numeric base is valid.
** The ft_base_check() function, verifies char pointer 'base' is valid.
**
** @param		char	*base	- numeric base string.
**
** @return
** 		- The ft_base_check() function returns 1 if 'base' is a valid numeric
** 		base; or 0 if it isn't.
*/
int	ft_base_check(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (!ft_isalnum(base[i]))
			return (0);
		j = i;
		while (base[++j])
		{
			if (base[j] == base[i])
				return (0);
		}
		i++;
	}
	return (i);
}
