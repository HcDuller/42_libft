CC		= clang

RM		= rm -f

AR		= ar rc

CFLAGS	= -Wall -Wextra -Werror

NAME	= libft.a

BSRC	=	ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c

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
			ft_toupper.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c

OBJS	=	${SRC:.c=.o}

BOBJS	=	${BSRC:.c=.o}

.PHONY : clean fclean re

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

all: ${NAME}

bonus: ${NAME} ${BOBJS}
	${AR} ${NAME} ${BOBJS}

clean:
	${RM} ${OBJS} ${BOBJS}

fclean: clean
	${RM} ${NAME} 

re:	fclean all