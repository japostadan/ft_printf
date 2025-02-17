# Makefile for libft tester

CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_PATH = ../libft/
TESTER_NAME = libft_tester

SRC = tester.c
OBJ = $(SRC:.c=.o)

all: $(TESTER_NAME)

$(TESTER_NAME): $(OBJ)
	make -C $(LIBFT_PATH)
	$(CC) $(CFLAGS) $(OBJ) -L$(LIBFT_PATH) -lft -o $(TESTER_NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I$(LIBFT_PATH) -c $< -o $@

clean:
	rm -f $(OBJ)
	make -C $(LIBFT_PATH) clean

fclean: clean
	rm -f $(TESTER_NAME)
	make -C $(LIBFT_PATH) fclean

re: fclean all

.PHONY: all clean fclean re
