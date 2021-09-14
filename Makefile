# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rutgercappendijk <rutgercappendijk@stud      +#+                      #
#                                                    +#+                       #
#    Created: 2021/05/27 10:57:36 by rcappend      #+#    #+#                  #
#    Updated: 2021/09/14 12:14:15 by rcappend      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

SRCS		=	main.c \
				input_converter.c \
				index.c \
				utils/ft_memmove.c \
				utils/ft_isdigit.c \
				utils/ft_atoi.c \
				utils/ft_big_atoi.c \
				utils/ft_calloc.c \
				utils/ft_strlen.c \
				utils/ft_bzero.c \
				utils/ft_memcpy.c \
				utils/ft_isspace.c \
				utils/add_to_stack.c \
				utils/stacklen.c \
				utils/is_sorted.c \
				utils/get_index.c \
				operations/swap.c \
				operations/swap_swap.c \
				operations/push.c \
				operations/rotate.c \
				operations/rotate_rotate.c \
				operations/rev_rotate.c \
				operations/rev_rotate_rotate.c \
				sorting/mini_sort.c \
				sorting/small_sort.c \
				sorting/rotate_until_sorted.c \
				# sorting/small_sort.c \
				# operations/trade.c
OBJS		=	$(SRCS:.c=.o)

CC			=	gcc

CFLAGS		= 	-Wall  -Wextra -fsanitize=address -g3 # cleanup -Werror

all:		$(NAME)
$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

empty: all
	./$(NAME)

test: all
	./$(NAME) 2 1 3

dtest: all
	lldb $(NAME) -- 2 1 3

phony:
	all clean fclean re dtest test