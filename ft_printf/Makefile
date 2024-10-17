NAME = libftprintf.a
SRC = ft_printf.c\
	ft_basics.c
OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)
all: $(NAME)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: clean fclean all re
