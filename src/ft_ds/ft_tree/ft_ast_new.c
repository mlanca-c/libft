/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ast_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 12:53:48 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/05/01 13:36:31 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ds.h"

t_ast	*ft_ast_new(void *content)
{
	t_ast	*tree;

	if (!content)
		return (NULL);
	tree = ft_calloc(sizeof(t_ast), 1);
	if (!tree)
		return (NULL);
	tree->content = content;
	return (tree);
}
