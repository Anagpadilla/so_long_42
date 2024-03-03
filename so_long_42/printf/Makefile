# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/04 11:50:21 by anagarc4          #+#    #+#              #
#    Updated: 2023/05/04 11:50:29 by anagarc4         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	 =	libftprintf.a

CC		=	gcc 

CFLAGS	=	-Wall -Wextra -Werror 

SRCS	=	ft_printf.c \
			ft_putchar.c \
			ft_putstr.c \
			ft_putnbr.c \
			ft_strlen.c \
			ft_putptr.c \
			ft_putnbr.c \
			ft_basedec.c \
			ft_basehexa.c \

OBJS	=	$(SRCS:.c=.o)

LIB1		=	ar -rcs
LIB2		=	ranlib

RM		=	rm -f

all:	$(NAME)

%.o	:	%.c
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS) 
	$(LIB1) $(NAME) $(OBJS) 
	$(LIB2) $(NAME)
clean:	
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)
	
re:	fclean all

.PHONY:	all clean fclean re
