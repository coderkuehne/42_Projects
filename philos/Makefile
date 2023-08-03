# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 15:54:56 by Kekuhne           #+#    #+#              #
#    Updated: 2023/08/01 19:05:49 by Kekuhne          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo

CC = gcc

SRC		=	src/philo.c \
			src/init.c  \
			src/utils.c \
			src/philo_actions.c \
			src/time.c \
			src/monitoring.c \

OBJ 	=	$(SRC:.c=.o)

OBJS_DIR = src/

OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJ))

all: $(NAME)



$(NAME): $(OBJ)
	$(CC) $(OBJ) -g -o $(NAME) 
	chmod a+x $(NAME)

$(OBJS_DIR)%.o : %.c
	@mkdir -p $(OBJS_DIR)
	@$(CC) -Wall -Wextra -Werror -c $< -o $@

clean:
	rm -f ./src/*.o

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re