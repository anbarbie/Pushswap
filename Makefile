# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/06 20:25:44 by antbarbi          #+#    #+#              #
#    Updated: 2021/10/06 20:25:44 by antbarbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = clang
CFLAGS = -Wall -Wextra -Werror
LIBS = libft
IFLAGS = $(INC_DIR:%=-I%) $(LIBS:%=-I%/$(INC_DIR))
RM = rm -rf
SRC_DIR = src
INC_DIR = include
OBJ_DIR = obj

SRC = $(INIT) $(PUSH_SWAP) $(ACTIONS)

INIT = init.c error.c check_error.c is_sort.c
PUSH_SWAP = push_print.c reverse_print.c rotate_print.c swap_print.c \
			advanced_sort.c simple_sort.c sort_3.c convert_input.c
ACTIONS = swap.c push.c rotate.c reverse.c 

INIT := $(INIT:%.c=INIT/%.c)
PUSH_SWAP := $(PUSH_SWAP:%.c=push_swap/%.c)
ACTIONS := $(ACTIONS:%.c=ACTIONS/%.c)
OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): libs $(OBJ) $(INCLUDE:%.h=$(INC_DIR)/%.h)
	@echo "Compiling $(NAME)..."
	@$(CC) $(IFLAGS) $(CFLAGS) -o push_swap src/push_swap.c $(OBJ) -L$(LIBS) -lft -lncurses
	@echo "$(NAME): COMPILATION SUCCESSFUL"

debug: CFLAGS += -g3
debug: re
sanitize: CFLAGS += -fsanitize=address
sanitize: debug
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(@D)
	@echo "Compiling $@..."
	@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@
libs:
	@echo "Making libs..."
	@$(MAKE) -j -C $(LIBS)
clean:
	@$(RM) $(OBJ_DIR)
	$(MAKE) -C $(LIBS) fclean
fclean: clean
	@$(RM) push_swap
	@$(RM) push_swap.dSYM
re : fclean all
.PHONY: all $(NAME) libs clean fclean re