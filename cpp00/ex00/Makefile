NAME		=	megaphone
CC			=	clang++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic -pedantic-errors
OBJ			=	$(SRC:.cpp=.o)
SRC			=	megaphone.cpp

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CC) $(CFLAGS) -fsanitize=address -o $@ $^

%.o:			%.cpp
				$(CC) $(CFLAGS) -o $@ -c $<

clean:
				@rm -rf $(OBJ)
				@echo "clean: object files removed"

fclean:			clean
				@rm -rf $(NAME)
				@echo "fclean: binary file removed"

re:				fclean all

.PHONY:			all clean fclean re
