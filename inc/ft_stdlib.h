/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 00:40:37 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/25 12:58:31 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

# include <stdlib.h>
# include "ft_ctype.h"
# include "ft_math.h"
# include "ft_string.h"

/* C Library - <stdlib.h> */
double		ft_atof(const char *str);
int			ft_atoi(const char *str);
long int	ft_atol(const char *str);
void		*ft_calloc(size_t nitems, size_t size);
void		*ft_malloc(size_t size);
void		*ft_exit(int status, void (*f)(void *), void *arg);
int			ft_abs(int x);
int			ft_labs(long int x);

/* Other string related functions */
int			ft_atoi_base(char *str, int base);
long int	ft_atol_base(char *str, int base);
char		*ft_itoa(int n);
char		*ft_ltoa(long int n);
char		*ft_itoa_base(int n, int base);
char		*ft_ltoa_base(long int n, int base);
void		*ft_pmalloc(size_t size, void (*f)(void *), void *arg);

#endif /* FT_STDLIB_H */
