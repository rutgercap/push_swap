# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rcappend <rcappend@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/05/27 10:57:36 by rcappend      #+#    #+#                  #
#    Updated: 2021/05/28 12:00:34 by rcappend      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

SRCS		=	main.c \
				input_converter.c \
				libft/ft_memmove.c \
				libft/ft_isdigit.c \
				libft/ft_atoi.c \
				libft/ft_big_atoi.c \
				libft/ft_calloc.c \
				libft/ft_strlen.c \
				libft/ft_bzero.c \
				libft/ft_memcpy.c \
				libft/ft_isspace.c \
				operations/stacklen.c \
				operations/swap.c \
				operations/push.c
OBJS		=	$(SRCS:.c=.o)

LIBFT		=	libft.a

CC			=	gcc

CFLAGS		= 	-Wall  -Wextra -fsanitize=address -g3 # cleanup -Werror

all:		$(NAME)
$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(LIBFT):
	$(MAKE) -C libft
	mv libft/$(LIBFT) .

clean:
	@$(MAKE) -C libft clean
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(LIBFT)

re: fclean all

empty: all
	./$(NAME)

test: all
	./$(NAME) 1 2 3 4 5

dtest: all
	lldb $(NAME) -- -2147483648 2 3 4 5

phony:
	all clean fclean re dtest test