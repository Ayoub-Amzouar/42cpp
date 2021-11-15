NAME = Brain

SRC = main.c

FLAGS = -Wextra -Wall -Werror

all: $(NAME)

$(NAME): $(SRC)
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:

fclean:
	rm -rf $(NAME)

re: fclean all