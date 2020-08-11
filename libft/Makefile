#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgalazza <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/10 15:09:26 by hgalazza          #+#    #+#              #
#    Updated: 2019/09/10 15:17:58 by hgalazza         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
AR		= ar rc
RANLIB 	= ranlib

NAME 	= libft.a
HEAD	= libft.h
SRCS	= *.c

OBJS 	= *.o

# .PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME):
		@$(CC) -I $(HEAD) $(CFLAG) -c $(SRCS)
		@$(AR) $(NAME) $(OBJS)
		@$(RANLIB) $(NAME)

clean:
		@rm -f $(OBJS)

fclean: clean
		@rm -f $(NAME)

re: fclean all
