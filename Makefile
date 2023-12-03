# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamir <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 10:56:29 by mamir             #+#    #+#              #
#    Updated: 2023/11/23 15:26:32 by mamir            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c\
	  ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c\
	  ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c\
	  ft_strdup.c ft_memchr.c ft_substr.c ft_strjoin.c ft_strtrim.c	ft_putchar_fd.c ft_putstr_fd.c\
	  ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_split.c
CC = gcc

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)

.o.c:
	$(CC) $(CFLAGS) -c $<
	ar rcs $(NAME) $@
	
clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all