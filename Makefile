NAME = libftprintf.a

SRC = ft_printf.c ft_putnbr.c ft_putnbr_base.c ft_print_ptr.c ft_putnbr_u.c

HEADERFILES = ft_printf.h

CC = gcc

OBJ = $(SRC:.c=.o)

FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

%.o: %.c $(HEADERFILES)
	$(CC) -c $(FLAG) -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean fclean all

.PHONY: clean fclean all re