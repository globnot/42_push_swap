# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aborda <aborda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/21 12:30:00 by aborda            #+#    #+#              #
#    Updated: 2025/12/21 12:30:00 by aborda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Colors
GREEN		= \033[0;32m
YELLOW		= \033[0;33m
CYAN		= \033[0;36m
RESET		= \033[0m

# Project
NAME		= test_printf
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
INCLUDES	= -Iincludes -I../../includes

# Paths
LIBFT_DIR	= ../..
LIBFT		= $(LIBFT_DIR)/libft.a

# Sources
SRCS		= srcs/main.c \
			srcs/tests_ft_print_char.c \
			srcs/tests_ft_print_str.c \
			srcs/tests_ft_print_pointer.c \
			srcs/tests_ft_print_decimal.c \
			srcs/tests_ft_print_unsigned_decimal.c \
			srcs/tests_ft_print_hexalower.c \
			srcs/tests_ft_print_hexaupper.c \
			srcs/tests_ft_print_percent.c

OBJS		= $(SRCS:.c=.o)

# Rules
all: $(NAME)

$(LIBFT):
	@echo "$(CYAN)Building libft...$(RESET)"
	@$(MAKE) -C $(LIBFT_DIR) --no-print-directory

%.o: %.c
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	@echo "$(GREEN)✓$(RESET) Compiled: $(CYAN)$<$(RESET)"

$(NAME): $(LIBFT) $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_DIR) -lft -o $(NAME)
	@echo "$(GREEN)==========================================$(RESET)"
	@echo "$(GREEN)✓ $(NAME) created successfully!$(RESET)"
	@echo "$(GREEN)==========================================$(RESET)"

test: $(NAME)
	@echo "$(CYAN)Running tests...$(RESET)"
	@./$(NAME)

clean:
	@rm -f $(OBJS)
	@echo "$(YELLOW)✓ Test object files removed$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(YELLOW)✓ $(NAME) removed$(RESET)"

re: fclean all

.PHONY: all test clean fclean re
