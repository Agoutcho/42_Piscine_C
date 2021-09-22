# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atchougo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/21 23:22:22 by atchougo          #+#    #+#              #
#    Updated: 2021/09/21 23:30:16 by atchougo         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

HEADERS	= ./includes/

SOURCES = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

FLAGS	= -Wall -Wextra -Werror

OBJS	= ${SRC:.c=.o}

all:	${NAME}

.c.o:	${OBJS}
		ar rcs ${NAME} ${OBJS}

clean:
		rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
