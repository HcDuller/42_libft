NAME		=	libft.a

CC			=	clang
AR			=	ar -rc
RM			=	rm -rfd
CFLAGS		=	-Wall -Wextra -Werror

SRC_DIR		=	src
OBJ_DIR		=	objs

RAW	=	$(shell ls ./src)

SRC		:=	$(addprefix $(SRC_DIR)/,$(RAW))
OBJS	:=	$(addprefix $(OBJ_DIR)/,$(RAW:.c=.o))

.PHONY: securedir clean fclean re

$(NAME):	$(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.c securedir
	$(CC) $(CFLAGS) -c $< -I./ -o $@

all: $(NAME)

clean:	
	$(RM) $(OBJ_DIR)

fclean:
	$(RM) $(OBJ_DIR) $(NAME)

re:	fclean all

securedir:
	@mkdir -p $(OBJ_DIR)