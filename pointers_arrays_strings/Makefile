CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89
RM = rm

SRC0 = 0-main.c 0-reset_to_98.c
OBJ0 = $(SRC0:.c=.o)
NAME0 = 0-98

SRC1 = 1-main.c 1-swap.c
OBJ1 = $(SRC1:.c=.o)
NAME1 = 1-swap

all: 0 1

0: $(OBJ0)
	$(CC) $(CFLAGS) $(OBJ0) -o $(NAME0)

1: $(OBJ1)
	$(CC) $(CFLAGS) $(OBJ1) -o $(NAME1)

clean:	$(RM) *~ \#*\# \. \#* \
        $(NAME0) $(NAME1)

fclean: clean
	$(RM) $(OBJ0) $(OBJ1)
