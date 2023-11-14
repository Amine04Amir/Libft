# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamir <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 10:56:29 by mamir             #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2023/11/13 17:29:56 by mamir            ###   ########.fr        #
=======
#    Updated: 2023/11/14 13:06:18 by mamir            ###   ########.fr        #
>>>>>>> 71d40e96c0e36aa95b882428a185377725052d55
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c\
	  ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c\
	  ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c\
	  ft_strdup.c

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean : 
	rm -f $(OBJ)
<<<<<<< HEAD

=======
>>>>>>> 71d40e96c0e36aa95b882428a185377725052d55
fclean : clean
	rm -f $(NAME)

re : fclean all
