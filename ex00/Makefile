# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: radlouni <radlouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/03 21:37:01 by radlouni          #+#    #+#              #
#    Updated: 2025/11/12 16:56:18 by radlouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Convert

CC = c++
CPPFLAGS = -Wextra -Werror -Wall -g3 -std=c++98

SRCS = ScalarConverter.cpp \
	parsing.cpp \
	main.cpp


OBJS = ${SRCS:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) -o $@ $(CPPFLAGS) -c $< 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re