CXX=c++

CXXFLAGS=-Werror -Wall -Wextra -std=c++98

NAME=Polymorphism

SRC=main.cpp

OBJ_DIR=obj

OBJ=$(SRC:%.cpp=$(OBJ_DIR)/%.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o:%.cpp
	mkdir -p $(OBJ_DIR)
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re fclean clean all
