/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 19:00:54 by mlanca-c          #+#    #+#             */
/*   Updated: 2021/03/12 13:30:45 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_BONUS_H
# define LIBFT_BONUS_H

int				ft_putchar(char c);
void			ft_putnbr_base(unsigned long nbr, char *base, int *bytes);
int				ft_putstr(char *str);
int				ft_putstr_len(char *str, int len);
int				ft_putnbr(int n);
int				ft_putnbr_base_int(unsigned long nbr, char *base);
char			*ft_itoa_base(unsigned n, char *base);

#endif
