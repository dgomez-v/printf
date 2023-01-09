# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgomez-v <dgomez-v@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/13 12:52:39 by dgomez-v          #+#    #+#              #
#    Updated: 2022/12/13 13:04:02 by dgomez-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_alphanum.c ft_hexadem.c
				
OBJS =	$(SRCS:.c=.o) 

CC = gcc

CFLAGS = -Wall -Werror -Wextra

.c.o:
	$(CC) -c $(CFLAGS) $< -o $(<:.c=.o)

all: $(NAME)

$(NAME):	$(OBJS) 
	@ar rc $(NAME) $(OBJS) 

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
