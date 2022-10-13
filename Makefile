SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c\
ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_tolower.c ft_toupper.c 

CC = gcc

FLAGS = -Wall -Wextra -Werror -c

OBJS = ${SRCS:.c=.o}

NAME = libft.a

RM = rm -f

%.o : %.c libft.h
        ${CC} ${FLAGS} $< -o $@

${NAME} : ${OBJS}
        ar -rc $@ ${OBJS}

all : ${NAME}

clean :
        ${RM} ${OBJS}

fclean : clean
        ${RM} ${NAME}

re : fclean all

.PHONY : clean all fclean re