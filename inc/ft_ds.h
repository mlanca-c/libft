/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ds.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 13:29:02 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/30 16:11:46 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DS_H
# define FT_DS_H

# include "ft_stdlib.h"
# include "ft_stdio.h"
# include "ft_limits.h"

/* Linked List */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
	struct s_list	*previous;
}	t_lst;

t_lst	*ft_lst_new(void *content);
void	ft_lst_add_back(t_lst **lst, t_lst *new);
void	ft_lst_add_front(t_lst **lst, t_lst *new);
void	ft_lst_clear(t_lst **lst, void (*del)(void *));
t_lst	*ft_lst_last(t_lst *lst);
void	ft_lst_remove(t_lst **lst, void (*del)(void *));
int		ft_lst_size(t_lst *lst);
void	ft_lst_print(t_lst *lst, char *btw);
char	*ft_lst_tostr(t_lst *list, char *btw);

/* Stack */
typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
	struct s_stack	*previous;
}	t_stk;

void	ft_stk_add_back(t_stk **stk, t_stk *new);
void	ft_stk_add_front(t_stk **stk, t_stk *new);
void	ft_stk_clear(t_stk **stk);
t_stk	*ft_stk_dup(t_stk *stk);
int		ft_stk_find(t_stk *stk, int val);
t_stk	*ft_stk_first(t_stk *stk);
int		ft_stk_get(t_stk *stk, int pos);
int		ft_stk_has_bigger(t_stk *stk, int val);
int		ft_stk_has_dup(t_stk *stk);
int		ft_stk_is_sorted(t_stk *stk);
t_stk	*ft_stk_last(t_stk *stk);
int		ft_stk_max(t_stk *stk);
int		ft_stk_median(t_stk *stk);
int		ft_stk_min(t_stk *stk);
t_stk	*ft_stk_new(int data);
void	ft_stk_print(t_stk *stk, char *btw);
void	ft_stk_remove(t_stk **stk);
int		ft_stk_size(t_stk *stk);
void	ft_stk_sort(t_stk **stk);

/* Abstract Syntax Tree */
typedef struct s_ast
{
	void			*content;
	struct s_ast	*right;
	struct s_ast	*left;
}	t_ast;

t_ast	*ft_ast_new(void *content);
void	ft_ast_add_left(t_ast **root, t_ast *new);
void	ft_ast_add_right(t_ast **root, t_ast *new);
void	ft_ast_delete(t_ast *node, void (*del)(void *));
void	ft_ast_clear(t_ast *root, void (*del)(void *));
void	ft_ast_print(t_ast *root);

/* Double Content Linked List */
typedef struct s_dlist
{
	void			*key;
	void			*content;
	struct s_dlist	*next;
	struct s_dlist	*previous;
}	t_dlst;

t_dlst	*ft_dict_new(void *key, void *content);
void	ft_dict_add_back(t_dlst **lst, t_dlst *new);
void	ft_dict_add_front(t_dlst **lst, t_dlst *new);
void	ft_dict_clear(t_dlst *lst, void (*del)(void *));
void	ft_dict_delete(t_dlst *lst, void (*del)(void *));
t_dlst	*ft_dict_last(t_dlst *lst);
t_dlst	*ft_dict_front(t_dlst *lst);
void	ft_dict_print(t_dlst *lst, char *message1, char *message2);
void	*ft_dict_find(t_dlst *lst, void *key);
void	*ft_dict_replace(t_dlst *lst, void *key, void *value);
int		ft_dict_size(t_dlst *lst);
char	**ft_dict_to_arr(t_dlst *lst, char *delimiter);
t_dlst	*ft_dict_copy(t_dlst *lst);
void	ft_dict_sort(t_dlst **lst);
int		ft_dict_key_exists(t_dlst *lst, char *key);
void	ft_dict_remove(t_dlst **lst, void (*del)(void *));

#endif /* FT_DS_H */
