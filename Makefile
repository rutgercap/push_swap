# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rutgercappendijk <rutgercappendijk@stud      +#+                      #
#                                                    +#+                       #
#    Created: 2021/05/27 10:57:36 by rcappend      #+#    #+#                  #
#    Updated: 2021/09/27 15:40:47 by rcappend      ########   odam.nl          #
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
				sorting/big_sort.c \
				sorting/rotate_until_sorted.c
OBJS		=	$(SRCS:.c=.o)

CC			=	gcc

CFLAGS		= 	-Wall -Werror -Wextra -g

ARGS		=	-401666680 951039391 710097813 -1409587855 775784273

all:		$(NAME)
$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: all
	./$(NAME) $(ARGS)

drun: all
	lldb $(NAME) -- $(ARGS)

srun: all
	@./$(NAME) $(ARGS)

count:
	@$(MAKE) srun | wc -l

check: all
	@./push_swap $(ARGS) | ./checker_Mac $(ARGS) && $(MAKE) count

phony:
	all clean fclean re run srun count