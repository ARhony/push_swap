CC := gcc
CFLAGS := -Wall -Wextra -O2

SRCDIR := src
OBJDIR := obj
BINDIR := bin

NAME := push_swap
TARGET := $(BINDIR)/$(NAME)

LIBFT_DIR := lib/libft
LIBFT := $(LIBFT_DIR)/libft.a

SRC := $(wildcard $(SRCDIR)/*.c)
OBJ := $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRC))

FLAGS := -Wextra -Werror -Wall -O3

PARAMS := 0 2 1

.PHONY: all clean fclean re run up

all: $(TARGET)

$(TARGET): $(LIBFT) $(OBJ)
	@mkdir -p $(BINDIR)
	@$(CC) $(FLAGS) -o $@ $(OBJ) $(LIBFT) $(TOOLS) > /dev/null
	@echo "$(NAME) successfully compiled in $(BINDIR)/"

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	@$(MAKE) -s -C $(LIBFT_DIR)

clean:
	@$(MAKE) -s -C $(LIBFT_DIR) clean
	@rm -rf $(OBJDIR)
	@rm -rf $(BINDIR)

fclean: clean
	@$(MAKE) -s -C $(LIBFT_DIR) fclean

re: fclean all

up: $(OBJ)
	@$(CC) $(FLAGS) -o $@ $(OBJ) $(LIBFT) > /dev/null
	@echo "$(NAME) successfully compiled in $(BINDIR)/"

run: up
	@printf "\nRunning $(NAME) with the following params:\n$(PARAMS)\n"
	@cd $(BINDIR) ; ./$(NAME) "$(PARAMS)"