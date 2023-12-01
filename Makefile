# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 15:13:38 by lmaume            #+#    #+#              #
#    Updated: 2023/12/01 19:21:21 by lmaume           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_memmove.c \
		ft_memcpy.c \
		ft_bzero.c \
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
		ft_substr.c \
		ft_strjoin.c\
		ft_strtrim.c \
#s		ft_split.c \
#		ft_itoa.c \
#		ft_strmapi.c \
#		ft_striteri.c \
#		ft_putchar_fd.c \
#		ft_putsrt_fd.c \
#		ft_putendl_fd.c \
#		ft_putnbr_fd.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

LIB = -L. -libft

RM = rm -f

OBJS = $(SRCS:.c=.o)

all : $(NAME)
	
$(NAME) : $(OBJS)
	ar -rc $(NAME) $(OBJS)

#$(CC) -o $(NAME) $(OBJS) $(LIB)

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

main: all
	gcc main.c $(NAME)

exe: main
	./a.out

re : fclean all