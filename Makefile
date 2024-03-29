# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mschlenz <mschlenz@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/22 12:57:52 by mschlenz          #+#    #+#              #
#    Updated: 2022/04/14 12:31:02 by mschlenz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
 ft_strlen.c ft_strlcpy.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
 ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c\
 ft_memcmp.c ft_strnstr.c ft_strncmp.c ft_memchr.c ft_atoi.c ft_calloc.c ft_strdup.c\
 ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
 ft_strtrim.c ft_itoa.c ft_striteri.c ft_split.c

all: $(NAME)

$(NAME):
	cc -Wall -Wextra -Werror -c $(SRC)
	ar -rc $(NAME) $(SRC:.c=.o)
	#ranlib $(NAME)
	/bin/rm -f *.o

clean:
	/bin/rm -f *.o *.out *.a

fclean:
	/bin/rm -f $(NAME)

re: fclean all

cm:
	/bin/rm -f *.o *.out *.a
	make