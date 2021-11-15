Name = Moar_brainz!

SRC = main.cpp Zombie.cpp ZombieHorde.cpp

FLAGS = -Wextra -Wall -Werror

all: $(Name)

$(Name): $(SRC)
	clang++ $(FLAGS) $(SRC) -o $(Name)

clean:

fclean:
	rm -rf $(Name)

re: fclean all