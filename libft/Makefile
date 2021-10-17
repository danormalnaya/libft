NAME	=	 libft.a

CC	=	 gcc

CFLAGS	=	 -Werror -Wall -Wextra

AR	=	 ar -r

SRC	=	ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlen.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_strlcpy.c \
		ft_putnbr_fd.c \


OBJS	 =	$(SRC:%.c=%.o)

all	:	$(NAME)

$(NAME)	: 	$(OBJS) libft.h
	$(AR) $(NAME) $(OBJS)

%.o	:	%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	rm -rf $(OBJS) $(OBJ_BONUS)

fclean	: 	clean
	rm -rf $(NAME)

re	:	fclean all

.PHONY: clean fclean all re