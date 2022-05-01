/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ast_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 13:01:17 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/05/01 13:09:44 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ds.h"

static void	ft_ast_print_rec(t_ast *root, char *msg, int lvl);

void	ft_ast_print(t_ast *root, char *msg)
{
	ft_ast_print_rec(root, msg, 0);
}

static void	ft_ast_print_rec(t_ast *root, char *msg, int lvl)
{
	int	i;

	if (!root)
		return ;
	i = 0;
	while (i++ < lvl)
		ft_printf(" ");
	ft_printf(msg, root->content);
	ft_ast_print_rec(root->left, msg, lvl + 1);
	ft_ast_print_rec(root->right, msg, lvl + 1);
}
