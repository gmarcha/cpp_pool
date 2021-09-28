NAME		=	ex01.out
CC			=	clang++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic -pedantic-errors
HEAD		=	ClapTrap.hpp
OBJ			=	$(SRC:.cpp=.o)
SRC			=	main.cpp \
				ClapTrap.cpp

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CC) $(CFLAGS) -fsanitize=address -o $@ $^ -lm

%.o:			%.cpp $(HEAD)
				$(CC) $(CFLAGS) -o $@ -c $<

clean:
				@rm -rf $(OBJ)
				@echo "clean: object files removed"

fclean:			clean
				@rm -rf $(NAME)
				@echo "fclean: binary file removed"

re:				fclean all

.PHONY:			all clean fclean re
