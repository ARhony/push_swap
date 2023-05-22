NAME = push_swap

# Tools
TOOLS_DIR = tools
NAMETOOLS = $(TOOLS_DIR)/tools.a
TOOLS = $(NAMETOOLS)

# Libft
LIBFT_DIR = libft
NAMELIBFT = $(LIBFT_DIR)/libft.a
LIBFT = $(NAMELIBFT)

SRC = *.c
OBJS = $(SRC:.c=.o)

FLAGS = -Wextra -Werror -Wall -O3

all: $(TOOLS) $(LIBFT) $(NAME)

$(TOOLS):
	cd $(TOOLS_DIR); make

$(LIBFT):
	cd $(LIBFT_DIR); make

$(NAME):
	@echo "Compiling push_swap"
	gcc $(FLAGS) -o $(NAME) $(SRC) $(NAMETOOLS) $(NAMELIBFT) -lXext -lX11

clean:
	cd $(LIBFT_DIR); make clean
	cd $(TOOLS_DIR); make clean
	rm -f $(NAME) $(OBJ)

fclean: clean

re: clean all

.PHONY: all clean fclean re
