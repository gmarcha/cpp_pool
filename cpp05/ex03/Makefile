NAME		=	ex03.out
CC			=	clang++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic -pedantic-errors
HEAD		=	Bureaucrat.hpp \
				Form.hpp \
				ShrubberyCreationForm.hpp \
				RobotomyRequestForm.hpp \
				PresidentialPardonForm.hpp \
				Intern.hpp
OBJ			=	$(SRC:.cpp=.o)
SRC			=	main.cpp \
				Bureaucrat.cpp \
				Form.cpp \
				ShrubberyCreationForm.cpp \
				RobotomyRequestForm.cpp \
				PresidentialPardonForm.cpp \
				Intern.cpp

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CC) $(CFLAGS) -fsanitize=address -o $@ $^

%.o:			%.cpp $(HEAD)
				$(CC) $(CFLAGS) -o $@ -c $<

clean:
				@rm -rf $(OBJ)
				@echo "clean: object files removed"

fclean:			clean
				@rm -rf $(NAME) *_shrubbery
				@echo "fclean: binary and output files removed"

re:				fclean all

.PHONY:			all clean fclean re
