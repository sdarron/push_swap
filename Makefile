# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/30 21:52:25 by sdarron           #+#    #+#              #
#    Updated: 2020/10/01 00:30:38 by sdarron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

CHECKER = checker

PUSH_SWAP = push_swap

GCC = clang

LIB = libft/libft.a

SRC_CH = checker.c

SRC_PS = push_swap.c

SRCS =	func.c \
		func1.c \
		model.c \
		compare.c \
		mov.c \
		mov1.c \
		mov2.c \
		mov3.c \
		compareps.c \
		psmov.c \
		psmov1.c \
		psmov2.c \
		psmov3.c \
		psmovhundred.c \
		psmovhundred1.c \
		psmovhund500.c \
		psmovhund500_1.c \
		psmovhund500_2.c \
		psmovhundred2.c \

FLAGS = -fPIE -Wall -Wextra -Werror

OBJ = $(SRCS:.c=.o)

AR = ar rc
RLIB = ranlib

all:	$(NAME)

$(NAME):
		$(GCC) -c $(FLAGS) $(SRCS)
		$(AR) $(NAME) $(OBJ)
		$(RLIB) $(NAME)
		make -C ./libft/
		$(GCC) $(FLAGS) -o $(CHECKER) $(SRC_CH) $(NAME) $(LIB)
		$(GCC) $(FLAGS) -o $(PUSH_SWAP) $(SRC_PS) $(NAME) $(LIB)
clean:
		@/bin/rm -f $(OBJ)
		@/bin/rm -f libft/*.o

fclean: clean
		@/bin/rm -f $(NAME) $(CHECKER) $(PUSH_SWAP)
		@/bin/rm -f libft/libft.a
		
re: fclean all

.PHONY: all clean fclean re