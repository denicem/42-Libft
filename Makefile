# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 16:06:18 by dmontema          #+#    #+#              #
#    Updated: 2021/08/25 20:44:04 by dmontema         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
HEADERFILES := ./libft.h

LIBC-FUNC-FOLDER := ./libc-func/
LIBC-FUNCS := $(LIBC-FUNC-FOLDER)ft_atoi.c $(LIBC-FUNC-FOLDER)ft_bzero.c $(LIBC-FUNC-FOLDER)ft_isalnum.c $(LIBC-FUNC-FOLDER)ft_isalpha.c $(LIBC-FUNC-FOLDER)ft_isascii.c \
	$(LIBC-FUNC-FOLDER)ft_isdigit.c $(LIBC-FUNC-FOLDER)ft_isprint.c $(LIBC-FUNC-FOLDER)ft_memchr.c $(LIBC-FUNC-FOLDER)ft_memcmp.c $(LIBC-FUNC-FOLDER)ft_memcpy.c $(LIBC-FUNC-FOLDER)ft_memmove.c \
	$(LIBC-FUNC-FOLDER)ft_memset.c $(LIBC-FUNC-FOLDER)ft_strchr.c $(LIBC-FUNC-FOLDER)ft_strlcat.c $(LIBC-FUNC-FOLDER)ft_strlcpy.c $(LIBC-FUNC-FOLDER)ft_strlen.c $(LIBC-FUNC-FOLDER)ft_strncmp.c \
	$(LIBC-FUNC-FOLDER)ft_strnstr.c $(LIBC-FUNC-FOLDER)ft_strrchr.c $(LIBC-FUNC-FOLDER)ft_tolower.c $(LIBC-FUNC-FOLDER)ft_toupper.c

OBJFILES :=

CC := gcc
CFLAGS ?= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(LIBC-FUNC-FOLDER)
	$(CC) main.c $(LIBC-FUNCS) $(CFLAGS) -o $(NAME) 

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re