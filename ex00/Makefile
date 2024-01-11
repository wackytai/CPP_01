NAME = zombie
SOURCES = $(wildcard ./src/*.cpp)
CC = @c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98 -pedantic

all:	$(NAME)
$(NAME):	$(SOURCES)
		$(CC) $(CFLAGS) $(^) -o $(@) -fsanitize=address,undefined

clean:
		@rm -f $(wildcard ./src/*.o)

fclean:	clean
		@rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re