NAME = do-op

INC = includes

#SRC = srcs/cal.c srcs/do-op.c
SRCDIR = ./srcs
SRC = cal.c do-op.c
SRCS = $(addprefix $(SRCDIR)/, $(SRC))

OBJS = $(SRCS:.c=.o)

#$(OBJS) : $(SRCS)
#	gcc -Wall -Wextra -Werror -c $< -o $@ -I $(INC)
%.o : %.c
	gcc -Wall -Wextra -Werror -c $< -o $@ -I $(INC)


$(NAME) : $(OBJS)
	gcc -Wall -Wextra -Werror -o $(NAME) $(OBJS)

all : $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re: 
	make fclean
	make all

.PHONY : all clean fclean re