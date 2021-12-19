NAME = Intern

SRC = Bureaucrat.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp Form.cpp main.cpp

FLAGS = -Wextra -Wall -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm *_shrubbery

fclean:
	rm -rf $(NAME)

re: fclean all