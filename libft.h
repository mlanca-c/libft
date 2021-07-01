/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 10:52:45 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/07/01 19:34:42 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

# include "ft_stack.h"

# define ANSI_COLOR_RED		"\x1b[31m"
# define ANSI_COLOR_BLUE	"\x1b[34m"
# define ANSI_COLOR_GREEN	"\x1b[32m"
# define ANSI_COLOR_YELLOW	"\x1b[33m"
# define ANSI_COLOR_RESET	"\x1b[0m"

/*
** BONUS:
** This structure represents the elements of the single-list.
**
** void	*content		- data contained in the element. The void * allows to
** 						store any kind of data.
** struct s_list *next	- next element’s address or NULL if it’s the last
** 						element.
*/
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/*
** Part 1 Functions
*/
void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
size_t		ft_strlen(const char *s);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
long long	ft_atoi(const char *str);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strdup(const char *s);

/*
** Part 2 Functions
*/

void		*ft_calloc(size_t nmemb, size_t size);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);

/*
** Single List Functions (Bonus)
*/
t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstremove(t_list **lst);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst);
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void		ft_lstprint(t_list *lst);

/*
** Bonus Functions
*/
int			ft_abs(int j);
int			ft_is_even(int j);
long long	ft_power(long long n, long long times);
int			ft_is_negative(int n);
void		ft_sort_in_tab(int *tab, int size);
char		*ft_strncat(char *dst, char *src, unsigned int n);
int			ft_str_isnumeric(char *str);
int			ft_base_check(char *base);
int			ft_isspace(int c);
int			ft_nbrlen(unsigned long long int number, int base);
char		*ft_itoa_base(unsigned long long int n, char *base);
int			ft_atoi_base(char *str, char *base);
void		ft_swap(int *a, int *b);
void		ft_str_toupper(char *str);
int			ft_isint(long long int n);
int			ft_strcmp(char *s1, char *s2);
void		ft_putstr_color_fd(char *color, char *s, int fd);
char		*ft_straddc(char *str, char c);

#endif
