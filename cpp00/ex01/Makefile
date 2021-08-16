NAME		=	phonebook
CC			=	clang++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic -pedantic-errors
INC			=	-I inc/
OBJ			=	$(SRC:.cpp=.o)
SRC			=	src/main.cpp \
				src/Contact.cpp \
				src/Phonebook.cpp

all:			obj $(NAME)

$(NAME):		$(OBJ)
				$(CC) $(CFLAGS) -fsanitize=address -o $@ $^

%.o:			%.cpp
				$(CC) $(CFLAGS) $(INC) -o $@ -c $<

obj:
				@mkdir -p obj/

clean:
				@rm -rf $(OBJ) obj/
				@echo "clean: object files removed"

fclean:			clean
				@rm -rf $(NAME)
				@echo "fclean: binary file removed"

re:				fclean all

.PHONY:			all clean fclean re
