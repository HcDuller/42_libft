CC		= gcc

RM		= rm -f

AR		= ar rc

CFLAGS	= -Wall -Wextra -Werror

NAME	= libft.a

SRC		=	ft_atoi.c \
			ft_calloc.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_memccpy.c \
			ft_memcmp.c \
			ft_memmove.c \
			ft_strchr.c \
			ft_strlcat.c \
			ft_strlen.c \
			ft_strnstr.c \
			ft_tolower.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcpy.c \
			ft_memset.c \
			ft_strdup.c \
			ft_strlcpy.c \
			ft_strncmp.c \
			ft_strrchr.c \
			ft_toupper.c 

OBJS	=	${SRC:.c=.o}

.PHONY : clean fclean re

$(NAME): ${OBJS}
	${AR} ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean all