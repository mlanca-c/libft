# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/08 10:52:56 by mlanca-c          #+#    #+#              #
#    Updated: 2021/03/12 13:33:21 by mlanca-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		libft.a
SRCS	=		ft_memset.c \
      			ft_bzero.c \
      			ft_memcpy.c \
      			ft_memccpy.c \
      			ft_memmove.c \
      			ft_memchr.c \
      			ft_memcmp.c \
      			ft_strlen.c \
      			ft_strlcpy.c \
      			ft_strlcat.c \
      			ft_strchr.c \
    			ft_strrchr.c \
      			ft_strnstr.c \
      			ft_strncmp.c \
      			ft_atoi.c \
      			ft_isalpha.c \
      			ft_isdigit.c \
      			ft_isalnum.c \
      			ft_isascii.c \
      			ft_isprint.c \
      			ft_toupper.c \
      			ft_tolower.c \
      			ft_calloc.c \
      			ft_strdup.c \
      			ft_substr.c \
      			ft_strjoin.c \
      			ft_strtrim.c \
      			ft_split.c \
      			ft_itoa.c \
      			ft_strmapi.c \
      			ft_putchar_fd.c \
      			ft_putstr_fd.c \
      			ft_putendl_fd.c \
      			ft_putnbr_fd.c
OBJS	=		$(SRCS:.c=.o)
SRCSB	=		ft_lstnew.c \
       			ft_lstadd_front.c \
       			ft_lstsize.c \
       			ft_lstlast.c \
       			ft_lstadd_back.c \
       			ft_lstdelone.c \
       			ft_lstclear.c \
       			ft_lstiter.c \
       			ft_lstmap.c
OBJSB	=	$(SRCSB:.c=.o)
EXTRASRC	=	ft_putchar_bonus.c \
		  		ft_putnbr_base_bonus.c \
		  		ft_putstr_bonus.c \
		  		ft_putstr_len_bonus.c \
		  		ft_putnbr_bonus.c \
				ft_itoa_base_bonus.c
EXTRAOBJ	= 	$(EXTRASRC:.c=.o)
INCLUDES	= 	-I .
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
CLIB		=	ar -rc
RM			=	rm -f

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o) $(INCS)

all: $(NAME)

$(NAME): $(OBJS) $(EXTRAOBJ)
	$(CLIB) $(NAME) $(OBJS) $(EXTRAOBJ)

bonus: $(NAME) $(OBJSB)
	$(CLIB) $(NAME) $(OBJSB)

clean:
	$(RM) $(OBJS) $(OBJSB) $(EXTRAOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus extras
