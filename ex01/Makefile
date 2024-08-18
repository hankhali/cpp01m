C++ = c++
C++_FLAGS = -Wall -Wextra -Werror -std=c++98 
INFILES = 	main.cpp\
			Zombie.cpp\
			zombieHorde.cpp\

OBJFILES = $(INFILES:.cpp=.o)

NAME = Moar_brainz

all: $(NAME)


	$(C++) $(C++_FLAGS) $(OBJFILES) -o $(NAME) 
$(NAME):$(OBJFILES)

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re