# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 10:51:08 by sasalama          #+#    #+#              #
#    Updated: 2022/07/11 12:38:07 by sasalama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = philo.c ft_atoi.c

OBJS = ${SRCS:.c=.o}

NAME = philo

CC = gcc

FLAGS = -Wall -Wextra -Werror

RM = rm -f

%.o: %.c
			@${CC} ${FLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re