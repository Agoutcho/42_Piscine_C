NAME		= "do-op"

SRC			= ft_affichage.c ft_atoi.c ft_op.c main.c do-op.c

FLAGS		= -Wall -Wextra -Werror

OBJS		= ${SRC:.c=.o}

all:		${NAME}

.c.o:		${SRC}
			gcc ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			gcc ${FLAGS} -o ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
