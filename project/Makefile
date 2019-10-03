NAME = exect

CC = gcc

INCLUDES = libpro.h

CFLAGS = -Wall -Wextra -Werror

all:	$(NAME)

exect:
	$(CC) -o $(CFLAGS) *.c $(INCLUDES)
	ar rc $(NAME) *.o

fclean:	clean
	rm -f $(NAME)

clean:
	rm -f *.o

re:		fclean all