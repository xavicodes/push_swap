# Folders
EXTRAS_DIR    := extras
MOVEMENTS_DIR := movements
STACK_MAN_DIR := stack_man

# Files
SRCS := $(wildcard $(EXTRAS_DIR)/*.c $(MOVEMENTS_DIR)/*.c $(STACK_MAN_DIR)/*.c)

# Object files
OBJS := $(SRCS:.c=.o)


CC := gcc
CFLAGS := -Wall -Wextra -Werror


NAME := push_swap

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
