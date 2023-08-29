NAME = libft.a

INC = includes

SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(OBJS) : $(SRCS)
	gcc -Wall -Wextra -Werror -c $< -o $@ -I $(INC)

$(NAME) : $(OBJS)
	ar -rcs $@ $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re