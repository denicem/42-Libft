# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 16:06:18 by dmontema          #+#    #+#              #
#    Updated: 2022/07/24 16:20:25 by dmontema         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

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
	@printf "$(BLUE)Linking objects to a library file.\r"
	@$(AR) $(NAME) $(LIBFT_OBJS)
	@printf "\e[50C$(GREEN)[✓]\n$(RESET)"
	@echo "\t\t$(GREEN)$(BOLD)COMPLETE!$(RESET)\n"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | prep
	@printf "$(BLUE)$(BOLD)\rCompiling: $(CYAN)$(notdir $<)\r"
	@$(CC) $(CFLAGS) -MMD -MP -c $< -o $@
	@printf "\e[50C$(GREEN)[✓]\n$(RESET)"

clean:
	@printf "$(MAGENTA)Removing object files...\r$(RESET)"
	@rm -rf $(LIBFT_OBJS) $(OBJ_DIR)
	@printf "$(BOLD)$(GREEN)\e[50C[✓]\n$(RESET)"

fclean: clean
	@printf "$(MAGENTA)Removing library file...\r$(RESET)"
	@rm -f $(NAME)
	@printf "$(BOLD)$(GREEN)\e[50C[✓]\n$(RESET)\n"

re: fclean all

prep:
	@mkdir -p $(OBJ_DIR)

norm:
	@norminette -R CheckForbiddenSourceHeader inc/*.h | grep --color=always 'Error!\|Error:' || echo "$(OK_COLOR)Everything is OK!$(NO_COLOR)" >&1
	@norminette -R CheckForbiddenSourceHeader src/*.c | grep --color=always 'Error!\|Error:' || echo "$(OK_COLOR)Everything is OK!$(NO_COLOR)" >&1
