
NAME = libft.a
CC = clang
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror

SRCS		=		ft_atoi.c 		\
					ft_bzero.c		\
					ft_calloc.c		\
					ft_isalnum.c	\
					ft_isalpha.c	\
					ft_isascii.c	\
					ft_isdigit.c	\
					ft_isprint.c	\
					ft_memchr.c		\
					ft_memcmp.c		\
					ft_memmove.c	\
					ft_memset.c		\
					ft_strcat.c		\
					ft_strchr.c		\
					ft_strlcat.c	\
					ft_strlcpy.c	\
					ft_strlen.c		\
					ft_strncmp.c	\
					ft_strnstr.c	\
					ft_tolower.c	\
					ft_toupper.c	\

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