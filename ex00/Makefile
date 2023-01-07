NAME	= megaphone
CC		= c++
FLAGS	= -Wall -Werror -Wextra -std=c++98
RM		= rm -rf

all: $(NAME)

$(NAME):
	printf "Generating executable\n"
	$(CC) $(FLAGS) *.cpp -o $(NAME)

clean:
	printf "Removing executable\n"
	$(RM) $(NAME)

fclean: clean

re: fclean all