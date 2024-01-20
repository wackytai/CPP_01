NAME = manipulator
SOURCES = $(wildcard *.cpp)
CC = @c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98 -pedantic -fsanitize=address,undefined

all:	$(NAME)
$(NAME):	$(SOURCES)
		$(CC) $(CFLAGS) $(^) -o $(@)

clean:
		@rm -f $(wildcard *.o)

fclean:	clean
		@rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re