NAME = phonebook
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

INCLUDES = includes
SRCS = main.cpp Contact.cpp PhoneBook.cpp
OBJS = $(SRCS:.cpp=.o)

GREEN = \e[92;5;118m
YELLOW = \e[93;5;226m
RESET = \e[0m

# Debug
ifeq ($(DEBUG), 1)
   OPTS = -g
endif

%.o: %.cpp $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -I $(INCLUDES)

$(NAME): $(OBJS) $(INCLUDES)
	@printf "$(GREEN)Generating executable...\n$(RESET)";
	@$(CC) $(OBJS) $(OPTS) -o $(NAME)

all: $(NAME)

clean:
	@printf "$(YELLOW)Removing object files...\n$(RESET)";
	@$(RM) $(OBJS)

fclean: clean
	@printf "$(YELLOW)Removing executable...\n$(RESET)";
	@$(RM) $(NAME)

re: fclean all
