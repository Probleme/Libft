# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 05:35:22 by ataouaf           #+#    #+#              #
#    Updated: 2022/11/08 00:44:58 by ataouaf          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memchr.c\
ft_memset.c ft_strlcpy.c ft_strlen.c ft_tolower.c ft_toupper.c ft_strchr.c ft_strlcat.c ft_strrchr.c ft_strncmp.c ft_memcmp.c ft_strnstr.c\
ft_atoi.c ft_calloc.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c ft_strjoin.c\
ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c

CC = cc

CFLAGS = -Wall -Wextra -Werror -c

OBJS = ${SRCS:.c=.o}

NAME = libft.a

RM = rm -f

all : ${NAME}

${NAME} : ${OBJS}
	ar -rc $@ ${OBJS}

%.o : %.c libft.h
	${CC} ${CFLAGS} $< -o $@

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME} 

re : fclean all 

.PHONY : clean all fclean re