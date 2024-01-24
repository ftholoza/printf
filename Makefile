# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 11:26:54 by ftholoza          #+#    #+#              #
#    Updated: 2023/11/23 14:13:29 by ftholoza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror -g
SRCS = $(addprefix srcs/ft_, $(SRC))
OBJS = $(addprefix ft_, $(OBJ))
HEADER = ft_printf.h
SRC = puthexa_l2.c int_size_hexa2.c int_u.c int_size_decimal.c int_size_hexa.c printf.c print_adress.c putchar.c putstr.c itoa.c putnbr.c puthexa_l.c puthexa_u.c putunsigned.c strlen.c
MAIN = srcs/ft_printf.c
OBJ = $(SRC:.c=.o)
LIB = libftprintf.a

re : fclean $(LIB)
$(LIB) : $(OBJS)
	ar rcs $(LIB) $(OBJS)
$(OBJS) : $(SRCS)
	$(CC) $(FLAGS) -c $(SRCS)
clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(LIB) $(EXECUTABLE)
