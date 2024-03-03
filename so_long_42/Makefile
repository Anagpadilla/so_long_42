# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/17 15:07:17 by anagarc4          #+#    #+#              #
#    Updated: 2023/07/16 20:15:31 by anagarc4         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
RM = rm -rf
CC = gcc
CFLAGS = -Wall -Wextra -Werror #-g3 -fsanitize=address
SLFLAGS = -lmlx -framework OpenGL -framework AppKit
LIBFT_LIB = libft/libft.a
PRINTF_LIB = printf/libftprintf.a

SL = get_next_line.c\
	 get_next_line_utils.c\
	 open_map.c\
	 so_long.c\
	 check_map.c\
	 draw_map.c\
	 keys.c\
	 comments.c\
	 check_item.c\
	 load.c\

SRC_SL = $(addprefix srcs/, $(SL))
OBJ_SL = $(SRC_SL:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_SL)
	@make -C libft/
	@make -C printf/
	$(CC) $(CFLAGS) $(SLFLAGS) $(OBJ_SL) -o $(NAME) $(LIBFT_LIB) $(PRINTF_LIB)

clean:
	@make fclean -C libft/
	@make fclean -C printf/
	@$(RM) $(OBJ_SL)

fclean: clean
	@$(RM) $(NAME)

re: fclean all 

.PHONY: re clean fclean all
