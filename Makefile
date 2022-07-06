# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 16:06:18 by dmontema          #+#    #+#              #
#    Updated: 2022/07/06 19:41:45 by dmontema         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

CTYPE_SRCS	:=	ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isprint.c \
				ft_isascii.c \
				ft_isspace.c \
				ft_islower.c \
				ft_isupper.c \
				ft_tolower.c \
				ft_toupper.c

STDIO_SRCS	:=	ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_printf.c \
				ft_printers.c \
				get_next_line.c

STDLIB_SRCS	:=	ft_calloc.c \
				ft_atoi.c

STRING_SRCS	:=	ft_memset.c \
				ft_bzero.c \
				ft_memmove.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_strlen.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strnstr.c \
				ft_strncmp.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_strdup.c \
				ft_striteri.c \
				ft_strmapi.c \
				ft_itoa.c \
				stringbuilder.c \
				stringbuilder_append.c \
				stringbuilder_utils.c

LIST_SRCS	:=	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstadd_back.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstiter.c \
				ft_lstmap.c \
				ft_lstdelone.c \
				ft_lstclear.c

SRC_DIR		:=	./src/*
LIBFT_SRCS	=	$(CTYPE_SRCS) \
				$(STDIO_SRCS) \
				$(STDLIB_SRCS) \
				$(STRING_SRCS) \
				$(LIST_SRCS)

OBJ_DIR	:=	./obj
LIBFT_OBJS	=	$(addprefix $(OBJ_DIR)/, $(LIBFT_SRCS:.c=.o))

CC 			=	gcc
CFLAGS		=	-Wall -Wextra -Werror # -g
AR			=	ar rc

# ***************************************************************************** #
#	RULES																		#
# ***************************************************************************** #

all: $(NAME)

$(NAME): prep $(LIBFT_OBJS)
	$(AR) $(NAME) $(LIBFT_OBJS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@
# $(<:.c=.o)

clean:
	rm -f $(LIBFT_OBJS)
	rmdir $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

prep:
	@mkdir -p $(OBJ_DIR)