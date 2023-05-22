SRC = push.c swap.c rotate.c reverse_rotate.c

SRCS = $(SRC)

RM = rm -f
FLAGS = -Wall -Wextra -Werror -O3

NORM = norminette

OBJ = $(SRCS:.c=.o)

.c.o:
	gcc -c $(FLAGS) $< -o $@

NAME = tools.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $@ $^

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

norm:
	$(NORM)

.PHONY: all clean fclean re norm
