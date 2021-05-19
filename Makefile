# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlanca-c <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/18 12:21:33 by mlanca-c          #+#    #+#              #
#    Updated: 2021/05/19 17:07:11 by mlanca-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

	# File Name Variables #
NAME	=		libft.a
SRC		=		ft_memset.c \
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
      			ft_putnbr_fd.c \
				ft_abs.c \
				ft_is_even.c \
				ft_power.c \
				ft_is_negative.c \
				ft_sort_in_tab.c \
				ft_strncat.c \
				ft_str_isnumeric.c \
				ft_base_check.c \
				ft_isspace.c \
				ft_nbrlen.c \
				ft_itoa_base.c \
				ft_atoi_base.c \
				ft_swap.c \
				ft_str_isalpha.c \
				ft_str_toupper.c \
				ft_isint.c
OBJ		=		$(SRC:.c=.o)
LIST	=		ft_lstnew.c \
       			ft_lstadd_front.c \
       			ft_lstsize.c \
       			ft_lstlast.c \
       			ft_lstadd_back.c \
       			ft_lstdelone.c \
       			ft_lstclear.c \
       			ft_lstiter.c \
       			ft_lstmap.c
LIST_O	=		$(LIST:.c=.o)
STACK	=		stack/ft_stack_new.c \
				stack/ft_stack_add_front.c \
				stack/ft_stack_add_back.c \
				stack/ft_stack_size.c \
				stack/ft_stack_last.c \
				stack/ft_stack_first.c \
				stack/ft_stack_remove.c \
				stack/ft_stack_print.c \
				stack/ft_stack_clear.c \
				stack/ft_stack_is_duplicate.c \
				stack/ft_stack_is_sorted.c
STACK_O	=		$(STACK:.c=.o)
INC		= 		-I. -Istack

	# Compiling Variables #
CC		=	gcc
CFLAG	=	-Wall -Wextra -Werror
CLIB	=	ar -rc
RM		=	rm -f

	# Debugger #
ifeq ($(DEBUG), 1)
	D_FLAG	=	-g
endif

	# Fsanitize #
ifeq ($(SANITIZE), 1)
	D_FLAG	=	-fsanitize=address -g
endif

	# Colors #
GREEN		=	\e[38;5;118m
YELLOW		=	\e[38;5;226m
RESET		=	\e[0m
_SUCCESS	=	[$(GREEN)SUCCESS$(RESET)]
_INFO		=	[$(YELLOW)INFO$(RESET)]

%.o: %.c
	$(CC) $(CFLAG) $(D_FLAG) -c $< -o $(<:.c=.o) $(INC)

all: $(NAME)

$(NAME): $(OBJ) 
	@printf "$(_SUCCESS) Created object files in ./libft ...\n"
	@printf "$(_INFO) Compiling ./libft ...\n"
	$(CLIB) $(NAME) $(OBJ) 
	@printf "$(_SUCCESS) Compilation complete.\n"

bonus: $(LIST_O)
	@printf "$(_SUCCESS) Created object files in ./libft ...\n"
	@printf "$(_INFO) Compiling list in ./libft ...\n"
	$(CLIB) $(NAME) $(LIST_O)
	@printf "$(_SUCCESS) Compilation complete.\n"

stack: clean $(STACK_O)
	@printf "$(_SUCCESS) Created object files in ./libft ...\n"
	@printf "$(_INFO) Compiling stack in ./libft ...\n"
	$(CLIB) $(NAME) $(STACK_O)
	@printf "$(_SUCCESS) Compilation complete.\n"

clean:
	$(RM) $(OBJ) $(LIST_O) $(STACK_O)
	@printf "$(_SUCCESS) Cleaned all object files in ./libft.\n"

fclean: clean
	$(RM) $(NAME)
	@printf "$(_SUCCESS) Cleaned libft.a in ./libft.\n"

re: fclean all

.PHONY: all clean fclean re bonus extras
