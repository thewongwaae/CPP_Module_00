NAME	= Account
CPP		= c++
FLAGS	= -Wall -Wextra -Werror -I -std=c++98
RM		= rm -rf

SRC		= Account.cpp test.cpp
INC		= Account.hpp

OBJ		= $(SRC:%.cpp=%.o)

all : $(NAME)

%.o : %.cpp $(INC)
	@echo "\033[0;33mCompiling $<\033[0m"
	@$(CPP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	@echo "\033[0;32mAccounts\033[0m"
	@$(CPP) $(FLAGS) $^ -o $@

clean:
	@echo "\033[0;31mRemoving objects...\033[0m"
	@$(RM) $(OBJ)

fclean: clean
	@echo "\033[0;31mClearing the ledger...\033[0m"
	@$(RM) $(NAME)

re : fclean all