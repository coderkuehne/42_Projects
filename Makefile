# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kekuhne <kekuhne@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 19:36:14 by kekuhne           #+#    #+#              #
#    Updated: 2022/12/27 13:34:57 by kekuhne          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
CC = cc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror

SRCS		=		ft_atoi.c 			\
					ft_bzero.c			\
					ft_calloc.c			\
					ft_isalnum.c		\
					ft_isalpha.c		\
					ft_isascii.c		\
					ft_isdigit.c		\
					ft_isprint.c		\
					ft_memchr.c			\
					ft_memcmp.c			\
					ft_memcpy.c			\
					ft_memmove.c		\
					ft_memset.c			\
					ft_strcat.c			\
					ft_strchr.c			\
					ft_strrchr.c		\
					ft_strlcat.c		\
					ft_strlcpy.c		\
					ft_strlen.c			\
					ft_strncmp.c		\
					ft_strnstr.c		\
					ft_tolower.c		\
					ft_toupper.c		\
					ft_strdup.c			\
					ft_substr.c			\
					ft_strjoin.c		\
					ft_strtrim.c    	\
					ft_split.c			\
					ft_putchar_fd.c		\
					ft_putendl_fd.c		\
					ft_putnbr_fd.c		\
					ft_putstring_fd.c	\
					ft_itoa.c			\
					ft_strmapi.c		\
					ft_striteri.c		\


OBJECTS = $(SRCS:.c=.o)

all: $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJECTS)
	ar r $(NAME) $(OBJECTS)

clean:
	$(RM) $(OBJECTS)

fclean: clean 
		$(RM) $(NAME)
	
re: fclean all