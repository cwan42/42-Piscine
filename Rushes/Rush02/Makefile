SRCS	= create_elem.c ft_create_dict.c ft_is_valid.c ft_strdup.c main.c ft_bigfree.c ft_get_res.c ft_open.c ft_strmanip.c ft_check_arg.c ft_split.c

NAME	= rush-02

OBJS	= ${SRCS:.c=.o}

HEADERS = ft.h

CC	= gcc

RM	= rm -f

FLAGS	= -Wall -Wextra -Werror 

all :	${NAME}

${NAME} : ${OBJS}
	${CC} ${FLAGS} -g ${OBJS} -o ${NAME}

%.o : %.c
	${CC} ${FLAGS} -c $< -o $@

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : re fclean clean all
