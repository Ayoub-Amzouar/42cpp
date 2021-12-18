NAME = Form

SRC = Bureaucrat.cpp Form.cpp main.cpp

FLAGS = -Wextra -Wall -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	# clang++ $(FLAGS) $(SRC) -o $(NAME)
	g++ $(FLAGS) $(SRC) -o $(NAME)

clean:

fclean:
	rm -rf $(NAME)

re: fclean all