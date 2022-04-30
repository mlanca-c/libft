/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:49:03 by mlanca-c          #+#    #+#             */
/*   Updated: 2022/04/30 13:15:03 by mlanca-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <stdlib.h>

/* C Library - <string.h> */
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);
char	*ft_strncat(char *dest, const char *src, size_t n);
char	*ft_strchr(const char *str, int c);
int		ft_strcmp(const char *str1, const char *str2);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
size_t	ft_strlen(const char *str);
char	*ft_strrchr(const char *str, int c);

/* Other string related functions */
void	ft_bzero(void *str, size_t n);
char	*ft_pstrjoin(char const *str1, char const *str2);
char	**ft_split(char const *str, char c);
char	*ft_strdup(const char *str);
char	*ft_strjoin(char const *str1, char const *str2);
size_t	ft_strlcat(char *dest, const char *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
int		ft_strlstr(const char *haystack, char *needle, int n);
char	*ft_strmapi(char const *str, char (*f)(unsigned int, char));
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
char	*ft_strtrim(char const *str1, char const *set);
char	*ft_substr(const char *str, unsigned int start, size_t n);

#endif /* FT_STRING_H */
