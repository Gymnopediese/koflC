# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albaud <albaud@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/18 13:07:44 by albaud            #+#    #+#              #
#    Updated: 2023/04/11 12:21:49 by albaud           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS 	= $(wildcard */*.c) $(wildcard */*/*.c)
OBJS 	= ${SRCS:.c=.o}
NAME 	= koflibc.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

.c.o 	:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
		
all 	: $(NAME)

$(NAME)	: ${OBJS}
		ar rcs ${NAME} ${OBJS} ${LIBS}

c 		:
		find *.c */*.c | grep -v m_ | grep -v mini | tr '\n' ' '
		
clean	:
		rm -f ${OBJS}

fclean	:	clean
		rm -f ${NAME}


re		: fclean all

