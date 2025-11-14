# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: radlouni <radlouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/13 17:30:00 by radlouni          #+#    #+#              #
#    Updated: 2025/11/14 17:05:07 by radlouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Base

CC = c++
CPPFLAGS = -Wextra -Werror -Wall -g3 -std=c++98

SRCS = Base.cpp \
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