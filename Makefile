# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: axlee <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 20230710 14:13:26 by axlee             #+#    #+#              #
#    Updated: 2023/07/10 20:27:55 by axlee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq 
SRCFILE = main.c functions.c functions_more.c ft_start.c \
	ft_check_instructions.c ft_board.c ft_optimisations.c
SRCPATH = ./srcs/
SRCS = $(addprefix $(SRCPATH), $(SRCFILE))
HEADERS = ./include/
CC = cc
RM = rm -f
CFLAGS = -g -Wall -Wextra -Werror -I $(HEADERS)
OBJS = $(SRCS:.c=.o)

.PHONY: all clean fclean re

all:  $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
