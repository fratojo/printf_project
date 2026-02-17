NAME = libftprintf.a

SRC = ft_printf.c\
		ft_putchar.c\
		ft_puthexa.c\
		ft_putnbr.c\
		ft_putptr.c\
		ft_putstr.c

OBJS = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean

.PHONY: all clean fclean re
