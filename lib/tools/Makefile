SRC_DIR = src
OBJ_DIR = obj

SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))

NAME = tools.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -O3

RM = rm -f
NORM = norminette

.PHONY: all clean fclean re norm

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

norm:
	$(NORM)