/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ast_clear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 12:59:44 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/05/01 13:00:48 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ds.h"

void	ft_ast_clear(t_ast *root, void (*del)(void *))
{
	if (!root)
		return ;
	ft_ast_clear(root->left, del);
	ft_ast_clear(root->right, del);
	ft_ast_remove(root, del);
}
