# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albaud <albaud@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/17 18:46:11 by albaud            #+#    #+#              #
#    Updated: 2023/04/11 12:56:40 by albaud           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= $(wildcard srcs/*.c)
OBJS 	= ${SRCS:.c=.o}
NAME 	= main
CC		= gcc
CFLAGS	= -g -Wall -Wextra -Werror

.c.o 	:
		${CC} ${CFLAGS} -I /usr/X11/include -c $< -o ${<:.c=.o}
		
all 	: $(NAME)


$(NAME)	: ${OBJS}
		${CC} ${CFLAGS} -o $(NAME) $(OBJS)

clean	:
		rm -f ${OBJS} ${LIB}

fclean	:	clean
		rm -f ${NAME}

re		: fclean all

san: 
	${CC} ${CFLAGS} -fsanitize=thread -I /usr/X11/include -c $< -o ${<:.c=.o}