NAME = libft.a

SRC = $(wildcard *.c)
SRC_BONUS = $(wildcard *_bonus)
OBJ_BONUS = $(SRC:.c=.o)
OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)  
	@echo "Library $(NAME) created successfully!"

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	@echo "Object files cleaned."

fclean: clean
	rm -f $(NAME)
	@echo "Library and object files cleaned."

re: fclean all

bonus: $(NAME) $(OBJ_BONUS) 
	ar rcs $(NAME) $(OBJ) $(OBJ_BONUS) 
	@echo "Library $(NAME) created successfully!"