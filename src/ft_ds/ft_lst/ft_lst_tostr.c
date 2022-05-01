/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_tostr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 13:12:21 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/05/01 13:19:09 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ds.h"

char	*ft_lst_tostr(t_lst *lst, char *btw)
{
	char	*str;
	char	*tmp;

	str = ft_strdup("");
	while (lst)
	{
		tmp = str;
		str = ft_strjoin(str, lst->content);
		if (!str || ft_strcmp(tmp, str) == 0)
		{
			free(str);
			free(tmp);
			return (NULL);
		}
		free(tmp);
		if (lst->next)
		{
			tmp = str;
			str = ft_strjoin(str, btw);
			free(tmp);
		}
		lst = lst->next;
	}
	return (str);
}
