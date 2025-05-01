NAME= MyAwesomePhoneBook
SRC= src/PhoneBook.cpp src/Contact.cpp src/main.cpp
OBJS= $(SRC:.cpp=.o)
CC= c++
CFLAGS= -Wall -Wextra -Werror -std=c++98 -Iinclude
RM= rm -f

RESET = \033[0m
GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[34m
CYAN = \033[36m
RED = \033[31m
MAGENTA = \033[35m

TITLE= "\n$(MAGENTA)=====================================$(RESET)\n$(CYAN) CPP00/EX01  :  MY AWESOME PHONEBOOK       $(RESET)\n$(MAGENTA)=====================================$(RESET)\n"

all: title $(NAME)

title:
	@echo $(TITLE)

$(NAME): $(OBJS)
	@echo "$(GREEN)🔧 Compilation de $(NAME)..."
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	@echo "$(BLUE)📄 Compilation de $<..."
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@echo "$(YELLOW)🧹 Suppression des fichiers objets..."
	@$(RM) $(OBJS)

fclean : clean
	@echo "$(RED)🗑️  Suppression de l'exécutable..."
	@$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
