CC = gcc
OBJ = $(SRC:.c=.o)
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
BETTY = betty

SRC0 = _putchar.c main.c helper_func.c get_type_func.c _printf.c
OBJ0 = $(SRC0:.c=.o)
NAME0 = printf

all: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

0:
	$(BETTY) $(SRC0)
	$(CC) $(CFLAGS) $(SRC0) -o $(NAME0)

test:
	$(CC) $(CFLAGS) $(SRC0) -o $(NAME0)
