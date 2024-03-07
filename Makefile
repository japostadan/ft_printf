NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC_FILES = ft_printf.c ft_printf_char.c ft_printf_string.c ft_printf_int.c ft_printf_pointer.c ft_printf_uint.c ft_printf_hexa.c ft_printf_percent.c utils.c
OBJ_FILES = $(SRC_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

%.o: %.c Makefile ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
