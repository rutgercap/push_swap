NAME		=	libft.a

SRCS 		=	ft_atoi.c\
				ft_big_atoi.c\
				ft_abs.c\
				ft_putchar_fd.c\
				ft_bzero.c\
				ft_calloc.c\
				ft_isalnum.c\
				ft_isalpha.c\
				ft_isascii.c\
				ft_isspace.c\
				ft_isdigit.c\
				ft_isprint.c\
				ft_itoa.c\
				ft_memccpy.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_memset.c\
				ft_strncmp.c\
				ft_tolower.c\
				ft_toupper.c\
				ft_strlen.c\
				ft_strrchr.c\
				ft_strchr.c\
				ft_strnstr.c\
				ft_strdup.c\
				ft_strlcat.c\
				ft_strlcpy.c\
				ft_split.c\
				ft_substr.c\
				ft_strjoin.c\
				ft_strtrim.c\
				ft_strmapi.c\
				ft_putstr_fd.c\
				ft_putnbr_fd.c\
				ft_putendl_fd.c
SRC_OBJS	=	$(SRCS:.c=.o)

CC			=	clang

FLAGS		=	-Werror -Wall -Wextra

all:		$(NAME)
$(NAME):	$(SRC_OBJS)
			ar -rcs $(NAME) $(SRC_OBJS)

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -f $(SRC_OBJS)

fclean: clean
	rm -f $(NAME)

re:		fclean all

.PHONY:	all clean bclean fclean re bonus memtest
