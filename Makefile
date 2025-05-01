# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/01 10:27:26 by tbhuiyan          #+#    #+#              #
#    Updated: 2025/05/01 10:28:38 by tbhuiyan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror

SRCS =  ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_substr.c \
	ft_striteri.c \
	ft_strmapi.c \
	ft_strjoin.c \
	ft_split.c \
	ft_itoa.c \
	ft_strtrim.c \

OBJS = ${SRCS:.c=.o}

OBJS_BONUS = ${SRCS_BONUS:.c=.o}

NAME = libft.a

INC = libft.h

all : ${NAME}

%.o : %.c ${INC}
	@cc ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS} ${INC}
	@ar rc ${NAME} ${OBJS}

clean:
	@rm -f ${OBJS} ${OBJS_BONUS}

fclean: clean
	@rm -f ${NAME}

re: fclean all

bonus: ${OBJS_BONUS}
	@ar rc ${NAME} ${OBJS_BONUS}