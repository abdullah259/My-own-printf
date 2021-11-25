# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shalbloo <shalbloo@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/18 13:34:21 by shalbloo          #+#    #+#              #
#    Updated: 2021/11/25 13:09:33 by omar             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a


SRCS =  ft_hexdecimal.c ft_pointerhecx.c ft_printf.c ft_putchar.c ft_putsr.c ft_putnbr.c ft_unsiputnbr.c \

OBJS = ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o} 

$(NAME): ${OBJS}
		ar rcsv ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all
