NAME = libft

SRC_FILES = main.c utils.c validations.c conversions.c \
            file_handler.c arguments.c dictionary.c \

SRC = $(addprefix $(SRC_FILES))
OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Compilando archivos..."
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

$%.o: $%.c
	@echo "Compilando objetos..."
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Eliminando arhivos basura..."
	@rm -f $(OBJ)

fclean: clean
	@echo "Eliminando ejecutable..."
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re