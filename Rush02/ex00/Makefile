CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = rush-02

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

all: $(NAME)

.DEFAULT_GOAL = all
