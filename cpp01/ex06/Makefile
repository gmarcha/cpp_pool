NAME		=	ex06.out
CC			=	clang++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic -pedantic-errors
HEAD		=	Karen.hpp
OBJ			=	$(SRC:.cpp=.o)
SRC			=	main.cpp \
				Karen.cpp

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CC) $(CFLAGS) -fsanitize=address -o $@ $^

%.o:			%.cpp $(HEAD)
				$(CC) $(CFLAGS) -o $@ -c $<

clean:
				@rm -rf $(OBJ)
				@echo -e "clean: object files removed"

fclean:			clean
				@rm -rf $(NAME)
				@echo -e "fclean: binary file removed"

re:				fclean all

.PHONY:			all clean fclean re
