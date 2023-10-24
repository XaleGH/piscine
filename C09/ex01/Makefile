cc = gcc
CFLAGS = -Wall -Wextra -Werror -I./includes

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS = $(SRCS:.c=.o)

all:$(NAME)
%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<
$(NAME): $(OBJS)
	ar -rc $@ $^
clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
