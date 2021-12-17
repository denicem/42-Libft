# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 16:06:18 by dmontema          #+#    #+#              #
#    Updated: 2021/12/17 19:25:54 by dmontema         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
HEADERFILES	=	./inc/libft.h

SRC_DIR		:=	./src
CTYPE_DIR	:=	$(SRC_DIR)/ctype
STDIO_DIR	:=	$(SRC_DIR)/stdio
STDLIB_DIR	:=	$(SRC_DIR)/stdlib
STRING_DIR	:=	$(SRC_DIR)/string
LIST_DIR	:=	$(SRC_DIR)/list
FT_PRINTF_DIR	:= $(STDIO_DIR)/ft_printf

CTYPE_SRCS	:=	$(CTYPE_DIR)/ft_isalpha.c \
				$(CTYPE_DIR)/ft_isdigit.c \
				$(CTYPE_DIR)/ft_isalnum.c \
				$(CTYPE_DIR)/ft_isprint.c \
				$(CTYPE_DIR)/ft_isascii.c \
				$(CTYPE_DIR)/ft_isspace.c \
				$(CTYPE_DIR)/ft_islower.c \
				$(CTYPE_DIR)/ft_isupper.c \
				$(CTYPE_DIR)/ft_tolower.c \
				$(CTYPE_DIR)/ft_toupper.c

STDIO_SRCS	:=	$(STDIO_DIR)/ft_putchar_fd.c \
				$(STDIO_DIR)/ft_putstr_fd.c \
				$(STDIO_DIR)/ft_putendl_fd.c \
				$(STDIO_DIR)/ft_putnbr_fd.c \
				$(FT_PRINTF_DIR)/ft_printf.c \
				$(FT_PRINTF_DIR)/ft_printers.c \
				$(STDIO_DIR)/get_next_line.c

STDLIB_SRCS	:=	$(STDLIB_DIR)/ft_calloc.c \
				$(STDLIB_DIR)/ft_atoi.c

STRING_SRCS	:=	$(STRING_DIR)/ft_memset.c \
				$(STRING_DIR)/ft_bzero.c \
				$(STRING_DIR)/ft_memmove.c \
				$(STRING_DIR)/ft_memchr.c \
				$(STRING_DIR)/ft_memcmp.c \
				$(STRING_DIR)/ft_memcpy.c \
				$(STRING_DIR)/ft_strlen.c \
				$(STRING_DIR)/ft_strlcpy.c \
				$(STRING_DIR)/ft_strlcat.c \
				$(STRING_DIR)/ft_strchr.c \
				$(STRING_DIR)/ft_strrchr.c \
				$(STRING_DIR)/ft_strnstr.c \
				$(STRING_DIR)/ft_strncmp.c \
				$(STRING_DIR)/ft_substr.c \
				$(STRING_DIR)/ft_strjoin.c \
				$(STRING_DIR)/ft_strtrim.c \
				$(STRING_DIR)/ft_split.c \
				$(STRING_DIR)/ft_strdup.c \
				$(STRING_DIR)/ft_striteri.c \
				$(STRING_DIR)/ft_strmapi.c \
				$(STRING_DIR)/ft_itoa.c

LIST_SRCS	:=	$(LIST_DIR)/ft_lstnew.c \
				$(LIST_DIR)/ft_lstadd_front.c \
				$(LIST_DIR)/ft_lstadd_back.c \
				$(LIST_DIR)/ft_lstsize.c \
				$(LIST_DIR)/ft_lstlast.c \
				$(LIST_DIR)/ft_lstiter.c \
				$(LIST_DIR)/ft_lstmap.c \
				$(LIST_DIR)/ft_lstdelone.c \
				$(LIST_DIR)/ft_lstclear.c

LIBFT_SRCS	=	$(CTYPE_SRCS) \
				$(STDIO_SRCS) \
				$(STDLIB_SRCS) \
				$(STRING_SRCS) \
				$(LIST_SRCS)

OBJS_DIR	:=	./obj
LIBFT_OBJS	=	$(LIBFT_SRCS:.c=.o)

CC 			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
AR			=	ar rc

all:	$(NAME)

$(NAME): $(LIBFT_OBJS)
	$(AR) $(NAME) $(LIBFT_OBJS)

.c.o:	obj-dir
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
	rm -f $(LIBFT_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all