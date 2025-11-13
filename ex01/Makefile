# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: radlouni <radlouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/13 13:29:24 by radlouni          #+#    #+#              #
#    Updated: 2025/11/13 17:08:35 by radlouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serializer

CC = c++
CPPFLAGS = -Wextra -Werror -Wall -g3 -std=c++98

SRCS = Serializer.cpp \
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