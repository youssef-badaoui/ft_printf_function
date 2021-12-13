
NAME = libftprintf.a

HEADER = ft_printf.h

SRC =   ft_printf.c checkprint.c  ft_itoa.c  ft_printadr.c  ft_print.c ft_putchar.c  ft_putnbr.c  ft_putstr.c puthex.c  puthexup.c  putnbr45.c ft_toupper.c

OBJ = $(SRC:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(FLAGS) -c $<

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
