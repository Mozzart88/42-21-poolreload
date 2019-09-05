# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvanessa <tvanessa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/04 12:57:13 by tvanessa          #+#    #+#              #
#    Updated: 2019/09/04 12:58:55 by tvanessa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = gcc
CFLAGS = -Wall -Wextra -Werror
HEAD =  -I tools.h
SRC = main.c tools.c

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(HEAD) -c -o $@ $^

$(NAME): $(SRC:.c=.o)
	$(CC) $(CFLAGS) $(HEAD) -o $@ $^
clean:
	rm -f $(SRC:.c=.o)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
