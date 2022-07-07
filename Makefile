# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 16:06:18 by dmontema          #+#    #+#              #
#    Updated: 2022/07/07 22:42:01 by dmontema         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

# CTYPE_SRCS	:=	ft_isalpha.c \
# 				ft_isdigit.c \
# 				ft_isalnum.c \
# 				ft_isprint.c \
# 				ft_isascii.c \
# 				ft_isspace.c \
# 				ft_islower.c \
# 				ft_isupper.c \
# 				ft_tolower.c \
# 				ft_toupper.c

# STDIO_SRCS	:=	ft_putchar_fd.c \
# 				ft_putstr_fd.c \
# 				ft_putendl_fd.c \
# 				ft_putnbr_fd.c \
# 				ft_printf.c \
# 				ft_printers.c \
# 				get_next_line.c

# STDLIB_SRCS	:=	ft_calloc.c \
# 				ft_atoi.c

# STRING_SRCS	:=	ft_memset.c \
# 				ft_bzero.c \
# 				ft_memmove.c \
# 				ft_memchr.c \
# 				ft_memcmp.c \
# 				ft_memcpy.c \
# 				ft_strlen.c \
# 				ft_strlcpy.c \
# 				ft_strlcat.c \
# 				ft_strchr.c \
# 				ft_strrchr.c \
# 				ft_strnstr.c \
# 				ft_strncmp.c \
# 				ft_substr.c \
# 				ft_strjoin.c \
# 				ft_strtrim.c \
# 				ft_split.c \
# 				ft_strdup.c \
# 				ft_striteri.c \
# 				ft_strmapi.c \
# 				ft_itoa.c \
# 				stringbuilder.c \
# 				stringbuilder_append.c \
# 				stringbuilder_utils.c

# LIST_SRCS	:=	ft_lstnew.c \
# 				ft_lstadd_front.c \
# 				ft_lstadd_back.c \
# 				ft_lstsize.c \
# 				ft_lstlast.c \
# 				ft_lstiter.c \
# 				ft_lstmap.c \
# 				ft_lstdelone.c \
# 				ft_lstclear.c

# LIBFT_SRCS	=	$(CTYPE_SRCS) \
# 				$(STDIO_SRCS) \
# 				$(STDLIB_SRCS) \
# 				$(STRING_SRCS) \
# 				$(LIST_SRCS)
SRC_DIR		:=	./src/*

LIBFT_SRCS	:=	$(shell find $(SRC_DIR) -name "*.c" -execdir echo {} ";")


OBJ_DIR	:=	./obj
LIBFT_OBJS	=	$(addprefix $(OBJ_DIR)/, $(LIBFT_SRCS:.c=.o))

CC 			=	gcc
CFLAGS		=	-Wall -Wextra -Werror# -g
AR			=	ar rc

# ***************************************************************************** #
#	COLOURS																		#
# ***************************************************************************** #

BOLD	= \033[1m
BLACK	= \033[30;1m
RED	= \033[31;1m
GREEN	= \033[32;1m
YELLOW	= \033[33;1m
BLUE	= \033[34;1m
MAGENTA	= \033[35;1m
CYAN	= \033[36;1m
WHITE	= \033[37;1m
RESET	= \033[0m

# ***************************************************************************** #
#	RULES																		#
# ***************************************************************************** #

all: $(NAME)

$(NAME): $(LIBFT_OBJS)
	@printf "$(BLUE)Linking objects to a library file. "
	@$(AR) $(NAME) $(LIBFT_OBJS)
	@echo "$(GREEN)[✓]$(RESET)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | prep
	@printf "$(BLUE)$(BOLD)\rCompiling: $(CYAN)$(notdir $<)\r"
	@$(CC) $(CFLAGS) -MMD -MP -c $< -o $@
	@printf "\e[35C$(GREEN)[✓]\n$(RESET)"

clean:
	@printf "$(YELLOW)Removing object files...\r$(RESET)"
	@rm -rf $(LIBFT_OBJS) $(OBJ_DIR)
	@printf "$(BOLD)$(GREEN)\e[35C[✓]\n$(RESET)"

fclean: clean
	@printf "$(YELLOW)Removing library file...\r$(RESET)"
	@rm -f $(NAME)
	@printf "$(BOLD)$(GREEN)\e[35C[✓]\n$(RESET)"

re: fclean all

prep:
	@mkdir -p $(OBJ_DIR)
