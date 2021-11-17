NAME = replace

SRC = main.cpp Replace.cpp

FLAGS = -Wextra -Wall -Werror

all: $(NAME)

$(NAME): $(SRC)
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:

fclean:
	rm -rf $(NAME) *.replace

re: fclean all