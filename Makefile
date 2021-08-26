# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 16:06:18 by dmontema          #+#    #+#              #
#    Updated: 2021/08/26 19:09:57 by dmontema         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
HEADERFILES	=	./libft.h


LIBC_SRCS	= 	ft_atoi.c		\
				ft_bzero.c 		\
				ft_isalnum.c	\
				ft_isalpha.c	\
				ft_isascii.c	\
				ft_isdigit.c	\
				ft_isprint.c	\
				ft_memchr.c		\
				ft_memcmp.c		\
				ft_memcpy.c		\
				ft_memmove.c	\
				ft_memset.c		\
				ft_strchr.c		\
				ft_strlcat.c	\
				ft_strlcpy.c	\
				ft_strlen.c		\
				ft_strncmp.c	\
				ft_strnstr.c	\
				ft_strrchr.c	\
				ft_tolower.c	\
				ft_toupper.c	\
				ft_calloc.c		\
				ft_strdup.c

LIBC_OBJS	=	$(LIBC_SRCS:.c=.o)

CC 			=	gcc
CFLAGS 		= 	-Wall -Wextra -Werror
AR			=	ar rc

all: $(NAME)

$(NAME): $(LIBC_OBJS)
	$(AR) $(NAME) $(LIBC_OBJS)

.c.o:	
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
	rm -f $(LIBC_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all