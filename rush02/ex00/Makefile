# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nradal <nradal@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/18 18:29:02 by nradal            #+#    #+#              #
#    Updated: 2021/09/19 23:14:05 by nradal           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS = ft_algo_rush.c ft_algo_rush02.c ft_is_over_ui.c ft_recup_dico.c ft_split.c ft_str_minus_one.c main.c
OBJS = ${SRCS:.c=.o}
NAME = rush-02
CC = cc
CFLAGS = -Wall -Werror -Wextra
.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
RM = rm -f
${NAME}	:	${OBJS}
			${CC} -o ${NAME} ${OBJS}
all :	${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
		${RM} ${NAME}

re : fclean all

.PHONY : rush-02