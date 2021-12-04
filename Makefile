# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 16:06:18 by dmontema          #+#    #+#              #
#    Updated: 2021/12/04 22:08:18 by dmontema         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
HEADERFILES	=	./libft.h

SRC_DIR		:=	src
CTYPE_DIR	:=	$(SRC_DIR)/ctype
STDLIB_DIR	:=	$(SRC_DIR)/stdlib
STRING_DIR	:=	$(SRC_DIR)/string
LIST_DIR	:=	$(SRC_DIR)/list

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

LIST_SRCS	=	$(LIST_DIR)/ft_lstnew.c \
				$(LIST_DIR)/ft_lstadd_front.c \
				$(LIST_DIR)/ft_lstadd_back.c \
				$(LIST_DIR)/ft_lstsize.c \
				$(LIST_DIR)/ft_lstlast.c \
				$(LIST_DIR)/ft_lstiter.c \
				$(LIST_DIR)/ft_lstmap.c 
				$(LIST_DIR)/ft_lstdelone.c \
				$(LIST_DIR)/ft_lstclear.c \

LIBC_SRCS	=	ft_atoi.c		\
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
				ft_strdup.c		\
				ft_substr.c		\
				ft_strjoin.c 	\
				ft_itoa.c		\
				ft_putchar_fd.c	\
				ft_putstr_fd.c	\
				ft_putendl_fd.c	\
				ft_putnbr_fd.c 	\
				ft_striteri.c	\
				ft_strmapi.c	\
				ft_strtrim.c	\
				ft_split.c

LIBC_OBJS	=	$(LIBC_SRCS:.c=.o)


CC 			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
AR			=	ar rc

all:	$(NAME)

$(NAME): $(LIBC_OBJS)
	$(AR) $(NAME) $(LIBC_OBJS)

bonus: $(NAME) $(BONUS_OBJS)
	$(AR) $(NAME) $(BONUS_OBJS)

.c.o:	
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
	rm -f $(LIBC_OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all