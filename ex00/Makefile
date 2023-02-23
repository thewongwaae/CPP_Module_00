NAME	= megaphone
CC		= c++
FLAGS	= -Wall -Werror -Wextra -std=c++98

RM		= rm -rf

SRC		= megaphone.cpp
OBJ		= $(SRC:.cpp=.o)

%.o: %.cpp
	@echo "\033[0;33mCompiling $<"
	@$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[0;32mMegaphone!\033[0m"
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@echo "\033[0;31mRemoving objects...\033[0m"
	@$(RM) $(OBJ)

fclean: clean
	@echo "\033[0;31mTurning it off...\033[0m"
	@$(RM) $(NAME)

re: fclean all