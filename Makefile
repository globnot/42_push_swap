# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aborda <aborda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/22 10:21:17 by aborda            #+#    #+#              #
#    Updated: 2026/01/17 11:45:55 by aborda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Colors
RED			= \033[0;31m
GREEN		= \033[0;32m
YELLOW		= \033[0;33m
BLUE		= \033[0;34m
MAGENTA		= \033[0;35m
CYAN		= \033[0;36m
RESET		= \033[0m

# Project
NAME		= push_swap
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -g
INCLUDES	= -Iincludes -I./libft/includes

# Librairy
LIBFT 		= ./libft/libft.a

# Directories
OBJ_DIR		= objs

# Sources
SRCS 		= srcs/main.c srcs/parsing.c srcs/stack_utils.c \
			  srcs/parsing_utils.c srcs/operations_swap.c \
			  srcs/operations_push.c srcs/operations_rotate.c \
			  srcs/operations_reverse_rotate.c srcs/sorting.c \
			  srcs/sorting_utils.c srcs/radix_utils.c

# Objects
OBJS 		= $(SRCS:srcs/%.c=$(OBJ_DIR)/%.o)

# Rules
all: $(NAME)

$(LIBFT):
	@make -C libft

$(OBJ_DIR)/%.o: srcs/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	@echo "$(GREEN)✓$(RESET) Compiled: $(CYAN)$<$(RESET)"

$(NAME): $(LIBFT) $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
	@echo "$(GREEN)==========================================$(RESET)"
	@echo "$(GREEN)✓ $(NAME) created successfully!$(RESET)"
	@echo "$(GREEN)==========================================$(RESET)"

clean:
	@make clean -C libft
	@rm -rf $(OBJ_DIR)
	@echo "$(YELLOW)✓ $(NAME) Object files removed$(RESET)"

fclean: clean
	@make fclean -C libft
	@rm -f $(NAME)
	@echo "$(YELLOW)✓ $(NAME) removed$(RESET)"

re: fclean all

.PHONY: all clean fclean re
