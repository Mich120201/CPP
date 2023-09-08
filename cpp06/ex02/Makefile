# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 14:34:52 by marvin            #+#    #+#              #
#    Updated: 2023/08/30 14:34:53 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Identify
CC		= c++
CFLAG	= -std=c++98 -Wall -Wextra -Werror
SRCS	= main.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAG) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
