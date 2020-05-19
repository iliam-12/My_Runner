NAME	= my_runner

CC	= gcc

RM	= rm -f

SRCS	= ./law_of_my_runner.c \
	  ./admin.c \
	  ./destroy.c \
	  ./my_runner.c 

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS) -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
