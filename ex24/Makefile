# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvanessa <tvanessa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/04 13:08:21 by tvanessa          #+#    #+#              #
#    Updated: 2019/09/04 13:33:09 by tvanessa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

S = srcs
SS = $(S)/ft_putchar.c $(S)/ft_putstr.c $(S)/ft_strcmp.c $(S)/ft_strlen.c $(S)/ft_swap.c
SSO = $(S)/ft_putchar.o $(S)/ft_putstr.o $(S)/ft_strcmp.o $(S)/ft_strlen.o $(S)/ft_swap.o
H = -I includes
L = libft.a
CC = gcc
CF = -Wall -Wextra -Werror

all: $(L)

%.o: %.c
	$(CC) $(CF) $(H) -c -o $@ $^

$(L): $(SS:.c=.o)
	ar rc $(L) $(SSO)

clean:
	/bin/rm -f $(SS:.c=.o)

fclean: clean
	/bin/rm -f $(L)

re: fclean all
