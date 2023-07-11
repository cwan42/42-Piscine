# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwan42 <cwan42@student.42singapore.sg>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/11 23:42:07 by cwan42            #+#    #+#              #
#    Updated: 2023/07/11 23:49:56 by cwan42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c ft_strcmp.c

OBJS = ${SRCS:.c=.o}

INCL = includes

LIBC = ar rc

LIBR = ranlib

CC = gcc

RM = rm -f

CFLAGS = -Wextra -Wall -Werror

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${LIBR} ${NAME}

%.o:%.c
	${CC} ${CFLAGS} -g -c $< -o $@ -I ${INCL}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
