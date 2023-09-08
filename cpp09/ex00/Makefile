# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 14:39:34 by marvin            #+#    #+#              #
#    Updated: 2023/08/30 14:39:35 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= btc
CC		= c++
CFLAG	= -std=c++98 -Wall -Wextra -Werror
SRCS	= main.cpp BitcoinExchange.cpp
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
