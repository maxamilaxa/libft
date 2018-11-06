# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkopiika <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 18:48:28 by mkopiika          #+#    #+#              #
#    Updated: 2018/11/06 18:48:51 by mkopiika         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCE = *.c 
HEADER = libft.h
LIB = *.o 
   

all : $(NAME)

$(NAME):
	@gcc -c -Wall -Wextra -Werror $(SOURCE) -I $(HEADER)
	@ar rc $(NAME) $(LIB)

clean:
	@/bin/rm -f $(LIB)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
