# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/15 11:44:07 by kdvarako          #+#    #+#              #
#    Updated: 2024/05/31 16:03:37 by kdvarako         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC_1 = push_swap.c
SRC_2 = $(wildcard utils/*.c)
SRC_3 = $(wildcard sorting/*.c)

OBJ_1 = ${SRC_1:.c=.o}
OBJ_2 = ${SRC_2:.c=.o}
OBJ_3 = ${SRC_3:.c=.o}

CC = cc

CFlAGS = -Wall -Wextra -Werror

LIBFT = ./libft/libft.a

all:	${NAME}

.c.o:
	${CC} -c $< -o ${<:.c=.o}

$(LIBFT):
	$(MAKE) -C ./libft

${NAME}:	${OBJ_1} ${OBJ_2} ${OBJ_3} ${LIBFT}
	${CC} ${CFlAGS} ${OBJ_1} ${OBJ_2} ${OBJ_3} ${LIBFT} -o ${NAME}

clean:
	rm -f ${OBJ_1} ${OBJ_2} ${OBJ_3}
	$(MAKE) clean -C ./libft

fclean:	clean
	rm -f ${NAME}
	$(MAKE) fclean -C ./libft

re:	fclean all

.PHONY: all clean fclean re