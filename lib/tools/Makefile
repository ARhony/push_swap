SRC_DIR = src
OBJ_DIR = obj

LIBFT = ../libft/libft.a

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))

RM = rm -f
FLAGS = -Wall -Wextra -Werror -O3

NORM = norminette

TOTAL_FILES = $(words $(SRCS))
PROGRESS_BAR_LENGTH = 40

CURRENT_PROGRESS = 0

define draw_progress_bar
	$(eval TERMINAL_WIDTH=$(shell tput cols))
	$(eval PROGRESS_BAR_LENGTH=$(shell echo $$(($(TERMINAL_WIDTH)-16))))
	@printf "\rTOOLS:["
	@perl -e 'printf "%s", "#" x int($1 * $(PROGRESS_BAR_LENGTH) / $(TOTAL_FILES))' $(2)
	@perl -e 'printf "%s", " " x int(($(TOTAL_FILES) - $1) * $(PROGRESS_BAR_LENGTH) / $(TOTAL_FILES))' $(2)
	@printf "] ($(1)/$(TOTAL_FILES))"
endef

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	gcc -c $(FLAGS) $< -o $@
	$(eval CURRENT_PROGRESS=$(shell echo $$(($(CURRENT_PROGRESS)+1))))
	@$(call draw_progress_bar,$(CURRENT_PROGRESS),$(OBJS))

NAME = tools.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $@ $^ $(LIBFT)
	@printf "\n"

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

norm:
	@$(NORM)

.PHONY: all clean fclean re norm